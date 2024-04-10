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
    vector<int> v(n);
    map<ll, ll> mp;
    for (int i = 0; i < n; i++){
        cin >> v[i];
        mp[v[i]]++;
    }
  
    for (auto it : mp) {
        if (it.second > 1) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main(){
    fast();
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
