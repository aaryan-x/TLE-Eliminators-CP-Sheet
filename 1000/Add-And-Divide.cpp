#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    ll a, b, minMoves = INT_MAX;
    cin >> a >> b;
    ll A = a, B = b;
    for (int i = 0; i < 10; i++){
        ll moves = i;
        a = A;
        b = B + i;
        if (b==1) {
            b++;
            moves++;
        }
        while (a>0) {
            a /= b;
            moves++;
        }
        minMoves = min(moves, minMoves);
    }
    cout << minMoves << endl;
}

int main() {
    fast();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
