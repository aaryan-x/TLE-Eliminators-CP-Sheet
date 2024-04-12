#include <bits/stdc++.h>

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
    if (n % 2 == 0 && n >= 4) {
        if (n%6 == 0) {
            cout << n/6 << " ";
        } else {
            cout << n/6 + 1 << " ";
        }

        cout << n/4 << endl;
    } else cout << -1 << endl;
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
