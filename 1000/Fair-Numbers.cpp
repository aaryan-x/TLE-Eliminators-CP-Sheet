#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool isFair(ll n){
    ll N = n;
    while (n > 0) {
        ll digit = n % 10;
        if (digit != 0 && N % digit != 0) {
            return false;
        }
        n /= 10;
    }
    return true;
}

void solve() {
    ll n;
    cin >> n;

    while (isFair(n) == false) {
        n += 1;
    }
    cout << n << endl;
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
