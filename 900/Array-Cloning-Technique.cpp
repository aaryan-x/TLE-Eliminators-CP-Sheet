#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve(){
    ll n;
    cin >> n;
    map<ll, ll> mp;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        mp[x]++;
    }

    ll maxFrequency = 0, ans = 0;
    for (auto it : mp){
        maxFrequency = max(maxFrequency, it.second);
    }
  
    while (maxFrequency < n){
        ll diff = min(n - maxFrequency, maxFrequency);
        ans = ans + diff + 1;
        maxFrequency += diff;
    }
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
