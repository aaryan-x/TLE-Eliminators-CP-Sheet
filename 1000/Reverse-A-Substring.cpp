#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i < n - 1; i++) {
        if (s[i] > s[i + 1]) {
            cout << "YES\n";
            cout << i + 1 << " " << i + 2 << "\n";
            return;
        }
    }
    cout << "NO\n";
}

int main() {
    fast();
    int t = 1;
    // cin >> t; 
    while (t--) {
        solve();
    }
    return 0;
}
