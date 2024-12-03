#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll n;
vector<ll> dp;

ll getVal(ll pos){
    if(pos > n) return n+1;
    else if(pos == n)   return 0;
    else    return dp[pos];
}

void solve(){
    cin >>n;
    dp.resize(n+1, n+1);
    vector<ll> a(n);
    for(int i=0; i<n;i++){
        cin>>a[i];
    }
    dp[n-1] = 1;
    for(int i=n-2; i>=0;i--){
        dp[i] = min(1 + dp[i+1], getVal(i + a[i] + 1));
    }
    cout<<dp[0]<<endl;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
