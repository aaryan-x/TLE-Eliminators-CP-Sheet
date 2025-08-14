#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    vector <ll> arr(n);
    for (auto & it: arr) {
        cin >> it;
    }
    // We can only not change position of first element, if it is 1 then we can sort the arr.
    if (arr[0] == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
