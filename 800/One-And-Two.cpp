#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    ll n, a, count = 0;
    cin >> n;
    vector < ll > v;
    for (int i=0; i<n; i++) {
        cin >> a;
        if (a == 2) {
            count++;
            v.push_back(i + 1);
        }
    }

    if (count%2 == 0 && count == 0) {
      cout << "1" << endl;
    }else if(count%2 == 0 && count != 0){
      ll index = (v.size()/2) - 1;
      cout << v[index] << endl;
    }else{
        cout << "-1" << endl;
    }
}

int main() {
    fast();
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
