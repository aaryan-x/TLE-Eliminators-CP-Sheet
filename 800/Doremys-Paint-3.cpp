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
    map <int,int> mp;
    for (int i=0; i<n; i++) {
        int x;
        cin >> x;
        mp[x]++;
    }
  
    if (mp.size()>2){
        cout << "NO" << endl;
    }else{
        if (abs(mp.begin()->second - mp.rbegin()->second) <= 1){
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
    while(t--){
        solve();
    }
    return 0;
}
