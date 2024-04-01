#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    ll a, b, c;
    cin >> a >> b >> c;
  
    if (c%2 == 0){
        if(a>b){
            cout << "First" << endl;
        }else{
            cout << "Second" << endl;
        }
    }else{
        if(a+1 > b){
            cout << "First" << endl;
        }else{
            cout << "Second" << endl;
        }
    }
}

int main(){
    fast();
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
