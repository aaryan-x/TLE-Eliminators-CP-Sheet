#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    ll wheels;
    cin >> wheels;
    
    if (wheels % 2 != 0 || wheels < 4) {
        cout << "-1\n";
        return;
    }
    
    ll mnBuses = (wheels + 5) / 6;  // ceil(wheels/6)
    ll mxBuses = wheels / 4;
    cout << mnBuses << " " << mxBuses << "\n";
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
