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
    cin>>n;
    vector<int> arr(n);
    ll minDiff= INT_MAX;  
    for(int i=0; i<n;i++){
        cin>>arr[i];
      if(i>0){
      ll diff = arr[i]-arr[i-1];
      minDiff= min(diff, minDiff);
      }
    }
    
    if(minDiff<0){
        cout<<"0"<<endl;
    }else{
        cout<<(minDiff/2)+1<<endl;
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


