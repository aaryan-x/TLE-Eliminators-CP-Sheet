#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  string a, b;
  cin >> a >> b;
  int n = a.size(), m = b.size();
  vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

  int maxLen = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      if (a[i - 1] == b[j - 1]) {
        dp[i][j] = 1 + dp[i - 1][j - 1];
      } else {
        dp[i][j] = 0;
      }

      maxLen = max(maxLen, dp[i][j]);
    }
  }

  cout << n + m - 2 * maxLen << endl;
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
