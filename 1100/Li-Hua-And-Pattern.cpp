#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve(){
    ll n, k;
    cin >> n >> k;
    ll arr[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    ll diff = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (arr[i][j] != arr[n - i - 1][n - j - 1]) {
                diff++;
            }
        }
    }
    diff /= 2;
  
    if (diff > k) {
        cout << "NO" << endl;
    }else{
        k -= diff; //remaining operations
        if (n%2 == 1 || k%2 == 0) {
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}

int main(){
    fast();
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
