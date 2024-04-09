#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll count_0 = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            count_0++;
        }
    }

    if (count_0 == 1 || count_0 % 2 == 0) {
        cout << "BOB" << endl;
    } else {
        cout << "ALICE" << endl;
    }
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
