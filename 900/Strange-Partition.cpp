#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

ll ceil_div(ll x, ll y) {
    return (x + y - 1) / y;
}

void solve() {
    ll n, x;
    cin >> n >> x;
    vector<ll> arr(n);
    ll sum = 0, maxCeil = 0;    
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
        maxCeil += ceil_div(arr[i], x);
    }
    
    ll minCeil = ceil_div(sum, x);
    cout << minCeil << " " << maxCeil << "\n";
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
