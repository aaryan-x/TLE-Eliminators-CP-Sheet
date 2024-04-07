#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    ll n;
    cin >> n;
    string str;
    cin >> str;
    ll left = 0, right = n - 1;
    while (left <= right) {
        if ((str[left] == '0' && str[right] == '1') || (str[left] == '1' && str[right] == '0')) {
            left++;
            right--;
        }else{
            break;
        }
    }

    cout << right - left + 1 << endl;
}

int main(){
    fast();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
