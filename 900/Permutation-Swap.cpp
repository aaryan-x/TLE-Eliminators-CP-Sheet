#include<bits/stdc++.h>
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
  vector < ll > arr(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> arr[i];
  }

  ll ans = 0;
  for (int i = 1; i <= n; i++) {
    ans = __gcd(ans, abs(arr[i] - i));
  }
  cout << ans << endl;
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
