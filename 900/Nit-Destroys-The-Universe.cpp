#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

void solve() {
    ll n;
    cin >> n;
    vector<int> arr(n);
    for (ll i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    ll first = -1, last = -1;
    // find first non-zero
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            first = i;
            break;
        }
    }

    // all zeros case
    if (first == -1) {
        cout << 0 << "\n";
        return;
    }

    // find last non-zero
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] != 0) {
            last = i;
            break;
        }
    }

    // check if any zero lies between first and last
    bool hasZeroBetween = false;
    for (int i = first; i <= last; i++) {
        if (arr[i] == 0) {
            hasZeroBetween = true;
            break;  // stop early
        }
    }

    if (hasZeroBetween) cout << 2 << "\n";
    else cout << 1 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
