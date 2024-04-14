#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    string str;
    cin >> str;
    ll ab = 0, ba = 0, n = str.size();
    for (int i = 0; i < n - 1; i++) {
        if (str[i] == 'a' && str[i + 1] == 'b') {
            ab++;
        }
        if (str[i] == 'b' && str[i + 1] == 'a') {
            ba++;
        }
    }
    if (ab != ba) {
        str[0] = str[n - 1];
    }
    cout << str << endl;
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
