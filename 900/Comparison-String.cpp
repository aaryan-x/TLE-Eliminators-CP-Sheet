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
    string str;
    cin >> str;
    ll ans = 1, curr = 1;
    for (int i = 1; i < str.size(); i++) {
        if (str[i] == str[i - 1]) {
            curr++;
        } else {
            curr = 1;
        }
        ans = max(ans, curr);
    }
    cout << ans + 1 << endl;
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
