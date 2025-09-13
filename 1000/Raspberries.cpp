#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& a, int k) {
    int n = a.size();

    if (k == 2 || k == 3 || k == 5) {
        int ans = INT_MAX;
        for (int x : a) {
            ans = min(ans, (k - (x % k)) % k); // minimum additions req to make x divisible by k, extra %k is to handle the multiples of k.
        }
        return ans;
    }

    if (k == 4) {
        // Case 1: make one element divisible by 4
        int ans = INT_MAX;
        for (int x : a) {
            ans = min(ans, (4 - (x % 4)) % 4);
        }

        // Case 2: make sure there are at least two even numbers
        int cntEven = 0;
        for (int x : a) {
            if (x % 2 == 0) cntEven++;
        }

        if (n >= 2) {
            ans = min(ans, max(0, 2 - cntEven));
        }

        return ans;
    }

    return -1; // not expected since k ∈ {2,3,4,5}
}

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        cout << solve(a, k) << "\n";
    }
    return 0;
}
