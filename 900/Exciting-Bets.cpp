#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    ll a, b;
    cin >> a >> b;
  
    if (a < b)  swap(a, b);
  
    if (a == b) {
        cout << "0 0\n";
    } else {
        ll diff = a - b;
        ll moves = min(b % diff, diff - (a % diff));
        cout << diff << " " << moves << "\n";
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
