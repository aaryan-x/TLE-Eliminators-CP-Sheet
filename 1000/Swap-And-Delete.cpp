#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
} 

void solve() {
    string str;
    cin >> str;
    int n = str.size(), cnt0 = 0, cnt1 = 0;
    for (char c : str) {
        if (c == '0') cnt0++;
        else cnt1++;
    }

    int valid = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == '0' && cnt1 > 0) {
            valid++;
            cnt1--;  // consume one '1'
        } else if (str[i] == '1' && cnt0 > 0) {
            valid++;
            cnt0--;  // consume one '0'
        } else {
            break;   // can’t continue building t
        }
    }

    cout << n - valid << endl;
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
