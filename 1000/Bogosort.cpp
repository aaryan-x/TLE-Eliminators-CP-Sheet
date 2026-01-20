#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  ll n;
  cin >> n;

  vector<ll> arr(n);
  for (auto &it : arr) cin >> it;
  sort(arr.begin(), arr.end(), greater<ll>());
  for (auto &it : arr) cout << it << " ";
  cout << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
