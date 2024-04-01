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
    vector <ll> v(n-1);
    ll sum = 0;
    for (int i=0; i < n-1; i++){
        cin >> v[i];
        sum += v[i];
    }
    cout << -sum << endl;
}

int main(){
    fast();
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
