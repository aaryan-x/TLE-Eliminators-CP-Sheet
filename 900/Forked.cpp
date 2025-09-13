#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
} 

void solve() {
    ll a, b, xk, yk, xq, yq;
    cin >> a >> b >> xk >> yk >> xq >> yq;

    vector<pair<ll,ll>> directions = {
        {a, -b}, {a, b}, {-a, b}, {-a, -b},
        {b, a}, {b, -a}, {-b, a}, {-b, -a}
    };

    set<pair<ll,ll>> kingUnsafe, queenUnsafe;

    // Positions unsafe for king and queen
    for (auto it : directions) {
        ll x = xk + it.first;
        ll y = yk + it.second;
        kingUnsafe.insert({x, y});
        x = xq + it.first;
        y = yq + it.second;
        queenUnsafe.insert({x, y});
    }

    ll count = 0;
    for (auto it : kingUnsafe) {
        if (queenUnsafe.find(it) != queenUnsafe.end()) {
            count++;
        }
    }

    cout << count << "\n";
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
