#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve(){
    ll n, k, x;
    cin >> n >> k >> x;
    
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    
    vector<ll> ans;
    for (int i = 0; i < n-1; i++){
        if (v[i+1] - v[i] > x){
            ans.push_back(v[i+1] - v[i]);
        }
    }
    sort(ans.begin(), ans.end());
    
    int i = 0;
    while (i < ans.size()){
        if ((ans[i]-1)/x <= k){
            k -= (ans[i]-1)/x;
            i++;
        }else{
            break;
        }
    }
    cout << ans.size()-i + 1 << endl;
}

int main(){
    fast();
    int t = 1;
    // cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
