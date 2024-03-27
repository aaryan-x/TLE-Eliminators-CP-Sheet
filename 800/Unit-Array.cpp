#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve() {
    ll n;
    cin >> n;
    ll arr[n];
    ll sum = 0, product = 1;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
        product *= arr[i];
    }

    for (int i = 0; i <= n; i++) {
        if (sum >= 0 && product == 1) {
            cout << i << endl;
            break;
        }
        product *= -1;
        sum += 2;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
