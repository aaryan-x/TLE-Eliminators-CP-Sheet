#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve(){
    ll n, k;
    cin >> n >> k;
    if(n%2!=0 && k%2==0){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }
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
