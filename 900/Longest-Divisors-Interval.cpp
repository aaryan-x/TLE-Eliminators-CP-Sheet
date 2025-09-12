#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
  ll n;
  cin >> n;
  ll val = 1;
  while( n % val == 0){
    val++;
  }
  cout << val - 1 << endl;
}

int main(){
  int t; 
  cin>>t;
  while(t--){
    solve();
  }
    return 0;
}
