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
    vector<ll> b(n);
    for(int i=0 ; i<n;i++){
        cin>> b[i];
    }
    
    vector<int> a;
    a.push_back(b[0]);
    for(int i=1; i<n; i++){
        if (b[i] < b[i-1])  a.push_back(1);
        a.push_back(b[i]);
        
    }
    cout << a.size() << endl;
    for(int i=0; i<a.size(); i++){
        cout << a[i] << " ";
    }
    cout << endl;
    
    
}

int main() {
    fast();
    ll t;
    cin>> t;
    while(t--){
        solve();
    }
    return 0;
}
