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
    for(int i=0; i<n; i++){
        cin >> arr[i];
        cout << n + 1 - arr[i] << " ";
    }
    cout << endl;
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
