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
    vector <int> v(n);
    ll sum = 0;
    for (int i=0; i<n; i++){
        cin >> v[i];
        sum += v[i];
    }

    if (sum%2 == 0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
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
