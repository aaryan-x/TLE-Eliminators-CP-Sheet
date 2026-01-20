#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector<bool> prime(1e7, true);

void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
}

void solve() {
  ll d, p, q;
  cin >> d;
  for (int i = 1 + d;; i++) {
    if (prime[i] == true) {
      p = i;
      break;
    }
  }

  for (int j = p + d;; j++) {
    if (prime[j] == true) {
      q = j;
      break;
    }
  }

  cout << min(1LL * p * p * p, 1LL * p * q) << endl;
}

int main() {
  fast_io();

  prime[0] = false;
  prime[1] = false;
  for (int i = 2; i * i <= 1e7; i++) {
    if (prime[i] == true) {
      for (int j = i * i; j <= 1e7; j += i) {
        prime[j] = false;
      }
    }
  }

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
