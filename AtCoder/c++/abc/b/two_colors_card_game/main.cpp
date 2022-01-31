#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    string s[101], t[101];

    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> s[i];
    cin >> M;
    for (int i = 0; i < M; i++)
        cin >> t[i];

    int ans = 0;

    for (int si = 0; si < N; si++){

        int point = 0;

        for (int i = 0; i < N; i++){
            if (s[i] == s[si])
                point++;
        }

        for (int j = 0; j < M; j++){
            if (t[j] == s[si])
                point--;
        }

        ans = max(ans, point);
    }
    cout << ans << endl;
}
