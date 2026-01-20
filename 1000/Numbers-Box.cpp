#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> arr(n, vector<int>(m, 0));
  
  int absMin = INT_MAX, sum = 0, odds = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
      if (arr[i][j] < 0) odds++;
      sum += abs(arr[i][j]);
      absMin = min(absMin, abs(arr[i][j]));
    }
  }
  
  if (odds % 2 == 0) absMin = 0;
  cout << sum - 2 * absMin << endl;
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
