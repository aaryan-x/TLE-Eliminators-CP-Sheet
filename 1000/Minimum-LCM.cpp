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
    ll v = n;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            v = i; 
            break;
        }
    }
    cout << n/v << " " << n-(n/v) << endl;
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
