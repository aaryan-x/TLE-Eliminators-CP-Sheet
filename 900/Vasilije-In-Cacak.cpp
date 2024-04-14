#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

void solve(){
  ll n, k, x;
  cin >> n >> k >> x;

  ll mn = (k*(k+1))/2; // Min possible sum
  ll mx = ((n*(n+1))/2) - (((n-k)*(n-k+1))/2); // Max possible sum

  if (mn <= x && x <= mx) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
    
int main(){
  fast();
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
