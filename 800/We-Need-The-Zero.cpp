#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    ll n, ans = 0;
    cin >> n;
    vector < ll > arr(n);
    for (auto & it: arr) {
        cin >> it;
        ans ^= it;
    }

    if (ans == 0 || n % 2 == 1) { // if n is odd, then this operation can be useful or if the xor of n even elements is 0 itself.
        cout << ans << endl;
    } else {
        cout << -1 << endl;
    }

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
