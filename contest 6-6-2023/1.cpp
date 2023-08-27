#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    char x=str[0];
    ll i=1;
    for(i=1;i<n;i++){
        
        if(x==str[i]){
            cout<<x;
            x=str[i+1];
            i=i+1;
        }
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}