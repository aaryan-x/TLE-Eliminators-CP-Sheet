#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

vector<string> vals = {"00", "25", "50", "75"};

void solve() {
    string str;
    cin >> str;
    int n = str.size();
    int minDel = INT_MAX;

    for (auto val : vals) {
        int ptr = n - 1, ans = 0;

        while (ptr >= 0 && str[ptr] != val[1]) {
            ptr--;
            ans++;
        }
        if (ptr < 0) {
            ans = INT_MAX;
            continue;
        }

        ptr--;
        while (ptr >= 0 && str[ptr] != val[0]) {
            ptr--;
            ans++;
        }

        if (ptr >= 0) minDel = min(minDel, ans);
    }

    if (minDel == INT_MAX) cout << -1 << "\n";
    else cout << minDel << "\n";
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
