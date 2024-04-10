#include <bits/stdc++.h>
using namespace std;
const int mod =1e9+7;
typedef long long int ll;

void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve(){
    ll n;
    cin >> n;
    ll ans = ((((n*(n+1))%mod) * (4*n-1))%mod * 337)%mod;
    cout << ans << endl;
}

int main(){
    fast();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
