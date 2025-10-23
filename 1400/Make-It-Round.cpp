#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const long long mod = 1000000007;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    ll n, m;
    cin >> n >> m;
    ll ncopy = n;
    ll count2 = 0, count5 = 0;

    while (n % 2 == 0 && n > 0) {
        count2++;
        n /= 2;
    }

    while (n % 5 == 0 && n > 0) {
        count5++;
        n /= 5;
    }

    ll val = 1;
    while (val <= m) {
        if (count2 > count5 && val * 5 <= m) {
            count5++;
            val *= 5;
        } else if (count5 > count2 && val * 2 <= m) {
            count2++;
            val *= 2;
        } else if (count2 == count5 && val * 10 <= m) {
            val *= 10;
        } else {
            break;
        }
    }

    if (val == 1) {
        cout << ncopy * m << endl;
        return;
    }

    ll k = m / val;
    cout << k * ncopy * val << endl;
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
