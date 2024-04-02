#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve(){
    ll n;
    cin >> n;
    ll arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i=1; i<n-1; i++){
        if (arr[i] > arr[i-1] && arr[i] > arr[i+1]){
            cout << "YES" << endl;
            cout << i << " " << i+1 << " " << i+2 << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main(){
    fast();
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
