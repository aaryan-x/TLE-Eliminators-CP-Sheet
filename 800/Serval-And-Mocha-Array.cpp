#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    ll n;
    cin >>n;
    vector<ll> arr(n);
    for(int i=0; i<n;i++){
        cin >>arr[i];
    }
    
    for(int i=0; i<n;i++){
        for(int j=i+1; j<n;j++){
            int res = __gcd(arr[i], arr[j]);
            if(res <= 2){
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;
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
