#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve(){
    ll n, k, x;
    cin >> n >> k >> x;

    if(x!=1){
        cout << "YES" << endl;
        cout << n << endl;
        for (int i = 0; i < n; i++) {
            cout << "1 ";
        }
        cout << endl;
    }
    else if(k==1 || (k==2 && n%2!=0)){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
        cout << n / 2 << endl;

        if (k>=2 and n%2==0){
            for (int i=1; i<=n/2; i++){
                cout << 2 << " ";
            }
            cout << endl;
        }else if(k>=3){
            cout << 3 << " ";
            for (int i=1; i<n/2; i++) {
                cout << 2 << " ";
            }
            cout << endl;
        }
    }

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
