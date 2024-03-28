#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve() {
    ll n;
    cin >> n;
    ll steps = 0;

    while (n != 1) {
        if (n%3 != 0) {
            steps = -1;
            break;
        }
        if (n%6 == 0) {
            n /= 6;
            steps++;
        }else{
            n *= 2;
            steps++;
        }
    }

    cout << steps << endl;
}

int main() {
    ios_base::synce_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
