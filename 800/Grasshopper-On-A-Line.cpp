#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}

void solve() {
    ll x, k;
    cin >> x >> k;
  
    if(x%k == 0){
        cout << "2" << endl;
        cout << "1 " << x - 1 << endl;
    }else{
        cout << "1" << endl;
        cout << x << endl;
    }
}

int main() {
    fast();
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
