#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}

void solve() {
    ll n, k;
    cin >> n >> k;
    bool yes = false;
    vector <int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] == k) {
            yes = true;
        }
    }
    if (yes) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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
