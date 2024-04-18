#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int mod = 1e9 + 7;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void prime_divisors(ll n, map<ll, ll> &divisors) {
    for (int i = 2; i <= sqrt(n); i++) {
        while (n % i == 0) {
            divisors[i]++;
            n /= i;
        }
    }

    if (n > 1){
        divisors[n]++;
    }
}

void solve() {
    ll n;
    cin >> n;
    ll arr[n];
    map<ll, ll> divisors;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        prime_divisors(arr[i], divisors);
    }

    for (auto it : divisors) {
        if (it.second % n != 0) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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
