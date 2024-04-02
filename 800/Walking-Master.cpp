#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve(){
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
  
    // Case 1: B has higher y coordinate value
    if(b>d){
        cout << "-1" << endl;
        return;
    }

    ll moves = d - b;
    a += moves;
    b += moves;
  
    // Case 2: C is on the right of A.
    if(c>a){
        cout << "-1" << endl;
    }else{
        moves += (a-c);
        cout << moves << endl;
    }
}

int main(){
    fast();
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
