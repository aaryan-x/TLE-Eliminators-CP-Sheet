#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    ll n;
    cin >> n;

    vector<ll> v(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    ll mn = 1, mx = n, left = 1, right = n;
    while (left <= right) {
        if (v[left] == mn) {
            left++;
            mn++;
        } else if (v[left] == mx) {
            left++;
            mx--;
        } else if (v[right] == mn) {
            right--;
            mn++;
        } else if (v[right] == mx) {
            right--;
            mx--;
        } else {
            cout << left << " " << right << endl;
            return;
        }
    }

    cout << -1 << endl;
    
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
