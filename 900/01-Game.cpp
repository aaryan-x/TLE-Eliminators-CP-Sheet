#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve(){
    string str;
    cin >> str;
    ll count0 = 0, count1 = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '0') {
            count0++;
        } else {
            count1++;
        }
    }

    if (min(count0, count1) % 2 != 0) {
        cout << "DA" << endl;
    } else {
        cout << "NET" << endl;
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
