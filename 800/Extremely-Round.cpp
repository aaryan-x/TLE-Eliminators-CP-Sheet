#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector <int> a;

void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool isExtremelyRound(int n){
    string s = to_string(n);
    ll count = 0;
    for (char c: s) {
        if (c != '0') {
            count++;
        }
        if (count > 1) {
            return false;
        }
    }
    return true;
}

void solve(){
    ll n;
    cin >> n;
    ll ans = 0;
    for (ll x: a) {
        if (x <= n) {
            ans++;
        }
    }
    cout << ans << endl;

}

int main() {
    fast();
    for (int i = 1; i < 1000000; i++){
        if (isExtremelyRound(i)){
            a.push_back(i);
        }
    }

    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
