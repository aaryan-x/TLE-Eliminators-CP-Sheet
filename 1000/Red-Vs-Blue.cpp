#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    ll n, red, blue;
    cin >> n >> red >> blue;
    int p = red / (blue + 1), q = red % (blue + 1);
    for (int i = 0; i < q; i++) cout << string(p + 1, 'R') << 'B';
    for (int i = q; i < blue; i++) cout << string(p, 'R') << 'B';
    cout << string(p, 'R');
    cout << endl;

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
