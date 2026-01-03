#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n, k1, k2;
    cin >> n >> k1 >> k2;
    ll k = k1 + k2;
  
    vector<ll> a(n), b(n);
    for (auto &it : a) cin >> it;
    for (auto &it : b) cin >> it;

    priority_queue<ll> pq;
    for (int i = 0; i < n; i++) {
        pq.push(abs(a[i] - b[i]));
    }

    while (k--) {
        ll val = pq.top();
        pq.pop();
        pq.push(abs(val-1));
    }

    ll ans = 0;
    while (!pq.empty()) {
        ans += pq.top() * pq.top();
        pq.pop();
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
