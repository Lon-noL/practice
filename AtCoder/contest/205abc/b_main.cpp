#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, a[1000], b[1000];
    cin >> N;

    for (int i = 0; i < N; i++){
        cin >> a[i];
    }

    if (N == 1){
       cout << "Yes" << endl;
       return (0);
    }

    for (int i = 0; i < N - 1; i++){
        for (int j = i + 1; j < N; j++)
        if (a[i] == a[j]){
            cout << "No" << endl;
            return (0);
        }
    }

    cout << "Yes" << endl;
}

/*
int main(){
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(), a.end());
    bool ok = true;
    rep(i,n) if (a[i] != i+1) ok = false;
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
*/
