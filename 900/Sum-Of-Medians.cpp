#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n * k);
    for (int i = 0; i < n * k; i++) {
        cin >> arr[i];
    }

    long long sum = 0;
    int idx = n*k; // pointer to the last index + 1.

    while(k--){
        idx -= (n/2 + 1); // moving to all the contributing medians;
        sum += arr[idx];
    }
    
    cout << sum << "\n";
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
