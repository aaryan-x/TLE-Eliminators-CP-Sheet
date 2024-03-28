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
    vector < ll > arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector < pair < ll, ll >> map;
    for (int i = 0; i < n; i++) {
        ll res = arr[i] % k;
        if (res % k == 0) {
            res += k;
        }
        map.push_back({-res,i});
    }

    sort(map.begin(), map.end());
    for (auto it: map) {
        cout << it.second + 1 << " ";
    }
    cout << endl;
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
