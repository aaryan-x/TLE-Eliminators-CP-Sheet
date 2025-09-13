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

    vector<int> a(26, 0), b(26, 0);
    for (char c : str) {
        a[c - 'a']++;
    }

    ll ans = 0;
    for (char c : str) {
        a[c - 'a']--;
        b[c - 'a']++; // moving the char from left string to right string
        
        ll curr = 0;
        for (int i = 0; i < 26; i++) {
            curr += min(1, a[i]) + min(1, b[i]); // calculating the value of f(a) + f(b) at this instance
        }
        ans = max(ans, curr);
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
