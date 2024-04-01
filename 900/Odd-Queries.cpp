#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve(){
    ll n, q, arraySum = 0, left, right, k;
    cin >> n >> q;
    ll prefixSum[n+1] = {0};
    vector <ll> v(n+1);
    v[0] = 0;
    
    for (int i=1; i<=n; i++) {
        cin >> v[i];
        arraySum += v[i];
        prefixSum[i] = arraySum;
    }

    while(q--){
        cin >> left >> right >> k;
        ll ans = prefixSum[n] - (prefixSum[right] - prefixSum[left-1]) + k*(right-left+1);

        if (ans%2 != 0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
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
