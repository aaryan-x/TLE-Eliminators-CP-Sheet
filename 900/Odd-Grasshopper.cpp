#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll start, steps;
    cin >> start >> steps;
    ll x = 0;
  
    if(steps%4 == 0){
        x = 0;}
    else if(steps%4 == 1){
        x = -steps;}
    else if(steps%4 == 2){
        x = 1;}
    else{
        x = steps + 1;}

    if (start%2) {
        cout << start-x << endl;
    }else{
        cout << start+x << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
