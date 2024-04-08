#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    ll n, k;
    cin >> n >> k;
    k--;                                      // Adjusting for indexing so that k%n !0 at k == n;
    ll mid = n / 2;
    if (n%2 == 0) {
        cout << (k%n) + 1 << endl;           // B moved only k steps when n is odd
    }else{
        cout << (k+(k/mid))%n + 1 << endl;   // k/mid is number of times B jumps A
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
