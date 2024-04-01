#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve(){
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector <ll> prefix(n+1);
    
    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1];
        if (s[i-1] == 'B') {
            prefix[i]++;
        }
    }

    ll ans = k;
    for (int i = k; i <= n; i++) {
        ans = min(ans, k-(prefix[i]-prefix[i-k]));
    }
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
