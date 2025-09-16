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
    vector<pair<ll,ll>> visits;
    for (int i = 1; i <= n; i++) {
        ll visit;
        cin >> visit;
        visits.push_back({visit, i});
    }

    sort(visits.begin(), visits.end(), greater<pair<ll,ll>>());

    vector<ll> arr(n + 1, 0);  // arr[i] = coordinate of index i
    int right = 1, left = -1;
    ll cost = 0;

    // Assign coordinates alternately to maximize symmetry
    for (int i = 0; i < visits.size(); i++) {
        int idx = visits[i].second;
        if (i % 2 == 0) {
            arr[idx] = right;
            cost += 2LL * visits[i].first * abs(right);
            right++;
        } else {
            arr[idx] = left;
            cost += 2LL * visits[i].first * abs(left);
            left--;
        }
    }

    cout << cost << "\n";
    for (int i = 0; i <= n; i++) cout << arr[i] << " ";
    cout << "\n";
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
