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
    int idx = n*k - (n/2) - 1; // We jump to the last median and then iterate back, since the rest of elements in the start would not contribute to ans

    for (int i = 0; i < k; i++) {
        sum += arr[idx];
        idx -= (n/2) + 1; // jump back to the next median
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
