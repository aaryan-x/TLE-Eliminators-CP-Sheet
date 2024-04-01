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
    ll maxBlank = 0, currBlank = 0;
    vector <int> arr(n);

    for (ll i=0; i<n; ++i){
        cin >> arr[i];
        if(arr[i]==0){
            currBlank++;
        }else{
            maxBlank = max(maxBlank, currBlank);
            currBlank = 0;
        }
    }
    maxBlank = max(maxBlank, currBlank);
    cout << maxBlank << endl;
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
