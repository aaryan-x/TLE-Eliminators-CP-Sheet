#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    ll n;
    cin >> n;
    vector <ll> v(n);
    for (int i=0; i<n; i++){
        cin >> v[i];
    }
    swap(v[0], v[1]);
    swap(v[0], v[n - 1]);

    if (v[0] == v[1]){
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        for (int i=0; i<n; i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }
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
