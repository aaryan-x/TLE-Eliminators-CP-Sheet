#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    ll w, h;
    cin >> w >> h;
    ll ans = 0;
    
    for (int i = 0; i < 4; i++) {
        ll k;
        cin >> k;
        vector<ll> arr(k);
        for (int j = 0; j < k; j++) {
            cin >> arr[j];
        }
        
        ll base = arr[k-1] - arr[0];   // length of side segment
        ll height = h;
        if(i > 1) height = w;
        
        ll area = base * height;
        ans = max(ans, area);
    }
    
    cout << ans << "\n";
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
