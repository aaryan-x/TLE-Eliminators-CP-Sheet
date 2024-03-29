#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    unordered_map < char, int > mp;
    for (int i = 0; i < n; i++) {
        mp[str[i]]++;
    }
  
    ll count = 0;
    for (auto it: mp) {
        if (it.second % 2 != 0) {
            count++;
        }
    }

    if (n == k || count - k > 1) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }

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
