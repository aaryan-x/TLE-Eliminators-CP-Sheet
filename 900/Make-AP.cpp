#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    ll a, b, c;
    cin >> a >> b >> c;

    // Case 1: Change 'a'
    ll newA = 2 * b - c;
    if (newA > 0 && newA % a == 0) {
        cout << "YES\n";
        return;
    }

    // Case 2: Change 'b'
    ll diff = c - a;
    if (diff % 2 == 0) {
        ll newB = (a + c) / 2;
        if (newB > 0 && newB % b == 0) {
            cout << "YES\n";
            return;
        }
    }

    // Case 3: Change 'c'
    ll newC = 2 * b - a;
    if (newC > 0 && newC % c == 0) {
        cout << "YES\n";
        return;
    }

    cout << "NO\n";
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
