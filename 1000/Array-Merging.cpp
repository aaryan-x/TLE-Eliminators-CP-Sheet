#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cin >> b[i];
    
    map<ll,ll> mapA, mapB;
    
    // compute longest consecutive streaks in a
    ll curr = 1;
    mapA[a[0]] = 1;
    for(int i=1; i<n; i++){
        if(a[i] == a[i-1]) curr++;
        else curr = 1;
        mapA[a[i]] = max(mapA[a[i]], curr);
    }
    
    // compute longest consecutive streaks in b
    ll val = 1;
    mapB[b[0]] = 1;
    for(int i=1; i<n; i++){
        if(b[i] == b[i-1]) val++;
        else val = 1;
        mapB[b[i]] = max(mapB[b[i]], val);
    }
    
    // compute max combined streak
    ll ans = 0;
    for(auto &it: mapA){
        ll x = it.first;
        ll freq = it.second;
        if(mapB.find(x) != mapB.end()){
            freq += mapB[x];
        }
        ans = max(ans, freq);
    }
    for(auto &it: mapB){ // cover elements only in b
        if(mapA.find(it.first) == mapA.end()){
            ans = max(ans, it.second);
        }
    }
    
    cout << ans << "\n";
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
