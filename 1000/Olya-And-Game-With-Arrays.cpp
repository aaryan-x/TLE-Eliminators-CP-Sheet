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
    ll sum = 0, mn = LLONG_MAX, mn2 = LLONG_MAX;

    while(n--){
        ll m;
        cin >> m;
        vector<ll> arr(m);
        for(int i=0; i<m; i++){
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        mn = min(mn, arr[0]);
        
        if(m > 1){
            mn2 = min(mn2, arr[1]);
            sum += arr[1];
        }else{
            sum += arr[0];
        }
    }

    // If no second-minimum was found (all arrays of size 1), the answer is just sum (nothing to swap).
    if(mn2 == LLONG_MAX)    cout << sum << "\n";
    else    cout << sum - mn2 + mn << "\n";
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
