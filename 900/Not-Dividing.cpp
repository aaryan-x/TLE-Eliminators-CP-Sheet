#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

void solve(){
  ll n;
  cin >> n;
  vector <ll> v(n);
  for (int i=0; i<n; i++) {
    cin >> v[i];
  }
  if (v[0] == 1) {
    v[0]++;
  }
  
  for (int i=1; i<n; ++i) {
    if(v[i] == 1)
      v[i]++;
    if(v[i]%v[i-1] == 0)
      v[i]++;
  }

  for(auto x: v) {
    cout << x << " ";
  }
  cout << endl;
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
