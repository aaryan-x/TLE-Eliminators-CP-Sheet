#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve(){
    ll n;
    cin >> n;
    vector <ll> arr(n);
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    ll count = 0;
    for (int i = n-2; i >= 0; i--){
        while (arr[i] >= arr[i+1] && arr[i] > 0){
            arr[i] /= 2;
            count++;
        }
        if (arr[i] == arr[i+1]) {
            count = -1;
        }
    }
    cout << count << endl;
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
