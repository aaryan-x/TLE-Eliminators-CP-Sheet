#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve(){
    string s, t;
    cin >> s >> t;
    vector<int> sFreq(26,0), tFreq(26,0), drop(26,0);
    for(char c:s)   sFreq[c-'A']++;
    for(char c:t)   tFreq[c-'A']++;

    for(int i=0; i<26; i++){
        if(sFreq[i] < tFreq[i]){
            cout<<"NO"<<endl;
            return;
        }else{
            drop[i] = sFreq[i] - tFreq[i];
        }
    }
    
    string res;
    for(char c: s){
        int idx = c-'A';
        if(drop[idx] > 0){
            drop[idx]--;
        }else{
            res.push_back(c);
        }
    }
    
    if(res == t)    cout<<"YES"<<endl;
        else    cout<<"NO"<<endl;
    
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
