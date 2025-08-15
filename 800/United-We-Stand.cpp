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
  
    vector<ll> a(n);
    for (auto &it : a) {
        cin >> it;
    }
    sort(a.begin(), a.end());

    if (a[0] == a[n - 1]) {
        cout << -1 << endl;
        return;
    }
    
    int k = 0;
    while (a[k] == a[0])    k++;
    cout << k << " " << n - k << endl;

    for (int i = 0; i < k; i++) cout << a[i] << " ";
    cout << endl;
    
    for (int i = k; i < n; i++) cout << a[i] << " ";
    cout << endl;
}

int main() {
    fast();
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
