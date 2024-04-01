#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve(){
    ll n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;

    for (int i=0; i<6; ++i){
        if (x.find(s) != -1){
            cout << i << endl;
            return;
        }
        x += x;
    }
    cout << -1 << endl;
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
