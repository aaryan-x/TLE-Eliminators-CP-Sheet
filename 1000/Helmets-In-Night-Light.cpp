#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve(){
    ll n, p;
    cin >> n >> p;
    
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    vector<pair<ll,ll>> shares;
    for (int i = 0; i < n; i++) {
        shares.push_back({b[i], a[i]}); // {cost, count}
    }
    sort(shares.begin(), shares.end()); // sort by cost

    ll index = 0, count = 1, cost = p; // initial one bought at price p
    while (count < n) {
        // check index first to avoid out-of-bounds
        if (index >= n || shares[index].first >= p) {
            cost += (n - count) * p; // calculating the remaining cost by directly telling them.
            break;
        }
        if (shares[index].second > 0) { // if the person can share information to someone
            cost += shares[index].first;
            shares[index].second--;
            count++;
        } else {
            index++; // we move to next person
        }
    }

    cout << cost << "\n";
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
