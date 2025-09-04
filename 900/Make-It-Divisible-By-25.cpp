#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    string str;
    cin >> str;
    int n = str.size();
    int minDel = n;

    for (int i = n - 1; i >= 0; --i) {
        if (str[i] == '0') {
            for (int j = i - 1; j >= 0; --j) {
                if (str[j] == '0' || str[j] == '5') {
                    minDel = min(minDel, (n - 2 - j));
                    break;
                }
            }
        } else if (str[i] == '5') {
            for (int j = i - 1; j >= 0; --j) {
                if (str[j] == '2' || str[j] == '7') {
                    minDel = min(minDel, (n - 2 - j));
                    break;
                }
            }
        }
    }
    
    cout << minDel << endl;
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
