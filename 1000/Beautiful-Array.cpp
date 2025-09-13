#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    ll n, k, b, s;
    cin >> n >> k >> b >> s;
    
    ll low = b * k, high = b * k + (n) * (k - 1);
    // If s is not in valid range
    if (s < low || s > high) {
        cout << -1 << "\n";
        return;
    }
    
    vector<ll> arr(n, 0);
    arr[n - 1] = b * k;
    ll left = s - (b * k);

    // Distribute leftover across all elements
    for (int i = 0; i < n && left > 0; i++) {
        ll val = min(left, k - 1);
        arr[i] += val;
        left -= val;
    }

    for (auto it : arr) cout << it << " ";
    cout << "\n";
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
