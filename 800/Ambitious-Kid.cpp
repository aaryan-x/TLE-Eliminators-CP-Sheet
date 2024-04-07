#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve(){
    ll n, minElement = INT_MAX;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        arr[i] = abs(arr[i]);
        minElement = min(minElement, arr[i]);
    }
    cout << minElement << endl;
}

int main() {
    fast();
    solve();
    return 0;
}
