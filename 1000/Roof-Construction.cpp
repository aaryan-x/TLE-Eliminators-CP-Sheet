#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int findMSB(int n) {
    int pos = -1;
    while (n > 0) {
        pos++;
        n >>= 1;
    }
    return pos; // returns index of highest set bit
}

void solve() {
    int n;
    cin >> n;

    int k = findMSB(n - 1); // highest set bit of (n-1)

    vector<int> arr;
    for (int i = (1 << k) - 1; i >= 0; i--) arr.push_back(i);
    for (int i = (1 << k); i < n; i++) arr.push_back(i);

    for (int x : arr) cout << x << " ";
    cout << "\n";
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
