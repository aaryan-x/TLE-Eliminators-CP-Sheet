#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n, sum = 0, mx = 0;
    cin >> n;
    vector<ll> a(n);

    for (ll &x : a){
        cin >> x;
        sum += x;
        mx = max(mx, x);
    }

    if (sum % 2 != 0 || 2 * mx > sum) cout << "NO" << endl;
    else  cout << "YES" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
