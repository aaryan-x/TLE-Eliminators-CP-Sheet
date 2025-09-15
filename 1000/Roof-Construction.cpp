#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

ll findMSB(ll n){
    ll pos = -1;
    while(n> 0){
        pos++;
        n = n>>1;
    }
    return pos;
}
void solve(){
    ll n;
    cin >> n;
    vector<ll> arr;
    
    int msb = findMSB(n-1);
    for(ll i = (1<<msb) -1; i >=0;i--) arr.push_back(i);
    for(ll i = (1<<msb); i<n;i++)  arr.push_back(i);
    
    for(auto it: arr)   cout<<it<<" ";
    cout<<endl;
    return;
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
