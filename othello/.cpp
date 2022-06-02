#include <stdio.h>
#include <stdlib.h>
#include "conio.h"

#define BOARD_WIDTH 8
#define BOARD_HEIGHT 8

// define the status of a cell
enum {
    COLOR_NONE = -1,
    COLOR_BLACK = 0,
    COLOR_WHITE = 1,
    COLOR_MAX
};

// check around a cell
enum {
    DIRECTION_UP,
    DIRECTION_UP_LEFT,
    DIRECTION_LEFT,
    DIRECTION_DOWN_LEFT,
    DIRECTION_DOWN,
    DIRECTION_DOWN_RIGTH,
    DIRECTION_RIGTH,
    DIRECTION_UP_RIGTH,
    DIRECTION_MAX
};

int directions[][2] = {
    {0, -1},  // DIRECTION_UP
    {-1, -1}, // DIRECTION_UP_LEFT
    {-1, 0},  // DIRECTION_LEFT
    {-1, 1},  // DIRECTION_DOWN_LEFT
    {0, 1},   // DIRECTION_DOWN
    {1, 1},   // DIRECTION_DOWN_RIGTH
    {1, 0},   // DIRECTION_RIGTH
    {1, -1}   // DIRECTION_UP_RIGTH
};

char ColorNames[][5 + 1] = {
    "Black", // COLOR_BLACK
    "White"  // COLOR_WHITE
};

int cells[BOARD_HEIGHT][BOARD_WIDTH];
int cursorX, cursorY;
int turn;

// whether it can be placed or not & reverse cells
bool checkcanPut(int _color, int _x, int _y, bool _turnOver) {
    // already put
    if (cells[_y][_x] != COLOR_NONE)
        return false;

    // check around
    for (int i = 0; i < DIRECTION_MAX; i++) {
        int x = _x, y = _y;

        x += directions[i][0];
        y += directions[i][1];

        if (cells[y][x] != (_color ^ 1))
            continue;

        while (1) {
            x += directions[i][0];
            y += directions[i][1];

            if ((x < 0) || (x >= BOARD_WIDTH) || (y < 0) || (y >= BOARD_HEIGHT))
                break;
            if (cells[y][x] == COLOR_NONE)
                break;
            if (cells[y][x] == _color) {
                if (!_turnOver)
                    return true;

                int x2 = _x, y2 = _y;
                while (1) {
                    cells[y2][x2] = _color; // ^1 でもいいかも

                    x2 += directions[i][0];
                    y2 += directions[i][1];

                    if ((x2 == x) && (y2 == y))
                        break;
                }
            }
        }
    }
    return false;
}

// check "pass"
bool checkcanPutAll(int _color) {
    for (int y = 0; y < BOARD_HEIGHT; y++)
        for (int x = 0; x < BOARD_WIDTH; x++)
            if (checkcanPut(_color, x, y, false))
                return true;

    return false;
}

void drawBoard() {

    // erase a board
    system("clear");

    // draw a board
    for (int y = 0; y < BOARD_HEIGHT; y++) {
        for (int x = 0; x < BOARD_WIDTH; x++) {
            if ((x == cursorX) && (y == cursorY))
                printf("  ");
            else {
                switch (cells[y][x]) {
                case COLOR_NONE:
                    printf("・"); break;
                case COLOR_BLACK:
                    printf("⚫︎"); break;
                case COLOR_WHITE:
                    printf("⚪︎"); break;
                }
            }
        }
        printf("\n");
    }
}

int main() {
    // initialization
    for (int y = 0; y < BOARD_HEIGHT; y++)
        for (int x = 0; x < BOARD_WIDTH; x++)
            cells[y][x] = COLOR_NONE;

    cells[3][3] = cells[4][4] = COLOR_WHITE;
    cells[3][4] = cells[4][3] = COLOR_BLACK;

    bool cannotPut = false;

    while (1) {
        drawBoard();

        if (cannotPut)
            printf("You can not put.\n");
        else
            printf("%s turn.\n", ColorNames[turn]);

        cannotPut = false;

        // keyboard command
        switch (getch()) {
        case 'w':
            cursorY--; break;
        case 's':
            cursorY++; break;
        case 'a':
            cursorX--; break;
        case 'd':
            cursorX++; break;
        default:

            // can't put
            if (!checkcanPut(turn, cursorX, cursorY, false)) {
                cannotPut = true;
                break;
            }

            // reverse cells
            checkcanPut(turn, cursorX, cursorY, true);

            // put on a selected cell
            cells[cursorY][cursorX] = turn;

            // change player
            turn ^= 1;
// パスの挙動が気になる！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！
            // pass
            if (!checkcanPutAll(turn)) {
                // printf("Pass\n");
                turn ^= 1;
            }
            break;
        }

        // finish
        if ((!checkcanPutAll(COLOR_BLACK)) && (!checkcanPutAll(COLOR_WHITE))) {
            int cnt[COLOR_MAX] = {};

            // count cells
            for (int y = 0; y < BOARD_HEIGHT; y++)
                for (int x = 0; x < BOARD_WIDTH; x++)
                    if(cells[y][x] != COLOR_NONE)
                        cnt[cells[y][x]]++;

            drawBoard();
            // display the number of cells counted
            for(int i = 0; i < COLOR_MAX; i++)
                printf("%s:%d\n", ColorNames[i], cnt[i]);

            if(cnt[COLOR_BLACK] == cnt[COLOR_WHITE])
                printf("draw\n");
            else {
                if(cnt[COLOR_BLACK] > cnt[COLOR_WHITE])
                    printf("%s", ColorNames[COLOR_BLACK]);
                else
                    printf("%s", ColorNames[COLOR_WHITE]);

                printf(" Win!\n");
            }
            getch();
            break;
        }
    }
}
