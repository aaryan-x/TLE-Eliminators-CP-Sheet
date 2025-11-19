#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  int n;
  cin >> n;
  vector<ll> arr(n);
  map<ll, ll> lastOccurance;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    lastOccurance[arr[i]] = i + 1;
  }
  vector<pair<ll, ll>> b;
  for (auto &it : lastOccurance) {
    b.push_back({it.first, it.second});
  }

  ll ans = -1;
  for (int i = 0; i < b.size(); i++) {
    for (int j = 0; j < b.size(); j++) {
      if (__gcd(b[i].first, b[j].first) == 1) {
        ans = max(ans, b[i].second + b[j].second);
      }
    }
  }

  cout << ans << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}
