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
    vector<ll> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
  
    n = unique(v.begin(), v.end()) - v.begin();
    ll ans = n;

    for (int i = 0; i < n - 2; i++) {
        if ((v[i] < v[i+1] && v[i+1] < v[i+2]) || (v[i] > v[i+1] && v[i+1] > v[i+2])) {
            ans--;
        }
    }

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
