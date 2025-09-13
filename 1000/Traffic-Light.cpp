#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n;
    char c;
    string str;
    cin >> n >> c >> str;
    
    if (c == 'g') {
        cout << 0 << "\n";
        return;
    }
    str += str;

    vector<ll> nextG( str.size() , INT_MAX);
    ll lastG = str.size() + 1;

    // Precompute distance to next 'g' from right to left
    for (ll i = str.size() - 1; i >= 0; i--) {
        if (str[i] == 'g') lastG = i;
        if (lastG >= 0) nextG[i] = lastG - i;
    }
    
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == c)  ans = max(ans, nextG[i]);
    }
    
    cout << ans << "\n";
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
