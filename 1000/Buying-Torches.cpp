#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

ll ceil(ll a, ll b){
    return (a + b - 1) / b;
}

void solve() {
    ll x, y, k;
    cin >> x >> y >> k;

    ll ans = ceil(y*k + (k-1), x-1);
    ans += k;
    cout << ans << endl;
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

 
