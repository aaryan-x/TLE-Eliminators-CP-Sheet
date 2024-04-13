#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve(){
    ll a, b, n;
    cin >> a >> b >> n;
    ll arr[n];
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        ans += min(arr[i], a - 1);
    }
    ans += b;
    cout << ans << endl;
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
