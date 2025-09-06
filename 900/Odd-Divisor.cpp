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
    
    // Check if n is a power of 2, since all odd numbers are their odd divisors and only powers of two doesn't have any odd divisor
    if ((n & (n - 1)) == 0) {
        cout << "NO" << endl;  // only divisors are powers of 2
    } else {
        cout << "YES" << endl; // has an odd divisor > 1
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
