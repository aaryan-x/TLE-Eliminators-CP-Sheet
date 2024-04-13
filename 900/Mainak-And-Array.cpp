#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    ll N, ans = INT_MIN;
    cin >> N;

    ll arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    //need to rotate both an and a0, where a1 is after an
    for (int i = 0; i < N; i++) {
        ans = max(ans, arr[(i-1+N) % N] - arr[i]);
    }

    // a1 is fixed
    for (int i = 1; i < N; i++) {
        ans = max(ans, arr[i] - arr[0]);
    }

    //an is fixed
    for (int i = 0; i < N - 1; i++) {
        ans = max(ans, arr[n-1] - arr[i]);
    }

    cout << ans << endl;
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
