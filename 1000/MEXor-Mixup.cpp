#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve() {
  int a, b;
  cin >> a >> b;

  int xori = 0;
  if (a % 4 == 1) {
    xori = a - 1;
  } else if (a % 4 == 2) {
    xori = 1;
  } else if (a % 4 == 3) {
    xori = a;
  } else {
    xori = 0;
  }

  if (xori == b) {
    cout << a << endl;
  } else if ((xori ^ b) == a) {
    cout << a + 2 << endl;
  } else {
    cout << a + 1 << endl;
  }
}

int main() {
  ll t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
