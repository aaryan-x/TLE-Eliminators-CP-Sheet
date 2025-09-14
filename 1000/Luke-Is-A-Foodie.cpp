#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    ll n, x;
    cin >> n >> x;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)   
        cin >> arr[i];
    
    ll mn = arr[0], mx = arr[0];
    ll count = 0;

    for (int i = 1; i < n; i++) {
        mn = min(mn, arr[i]);
        mx = max(mx, arr[i]);

        if (mx - mn > 2 * x) {
            count++;         // we close one segment
            mn = arr[i];     // reset for new segment
            mx = arr[i];
        }
    }

    cout << count << endl;  // minimal operations = segments - 1
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
