#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve(){
    ll n, odd = 0, even = 0;
    cin >> n;
    vector <ll> v(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        
        if(i>0){
            if(v[i]%2==0 && v[i-1]%2==0) {
                even++;
            }
            if (v[i]%2!=0 && v[i-1]%2!=0) {
                odd++;
            }
        }
    }

    cout << even + odd << endl;
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
