#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector <int> v(n);
    ll mx = 0, count = 1;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    
    for (int i = 1; i < n; i++) {
        int diff = v[i] - v[i - 1];
        if (diff <= k) {
            count++;
        } else {
            mx = max(mx, count);
            count = 1;
        }
    }
    mx = max(mx, count);
    cout << n - mx << endl;
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
