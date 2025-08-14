#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    string str;
    cin >> str;
    
    // If there exists any ..., then we can just fill water in two corners and then replace water from middle block to empty ones. 
    if (str.find("...") != -1) {
        cout << 2 << "\n";
        return;
    }

    ll count = 0;
    for (char ch : str) {
        if (ch == '.') {
            count++;
        }
    }
    cout << count << "\n";
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
