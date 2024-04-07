#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve(){
    ll n, x;
    cin >> n >> x;
    ll maxDiff = INT_MIN, prevElement = 0;
    
    for (int i=0; i<n; i++) {
        ll a;
        cin >> a;
        maxDiff = max(maxDiff, a - prevElement);
        prevElement = a;
    }
  
    maxDiff = max(maxDiff, 2 * (x - prevElement));
    cout << maxDiff << endl;
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
