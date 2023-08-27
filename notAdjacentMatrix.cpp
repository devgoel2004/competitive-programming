#include<bits/stdc++.h>
using namespace std;
int solve(){
    int x;
    cin>>x;
    int n = x;
    vector <int> v;
    if(x==1){
        cout<<1<<'\n';
    }
    else if(x==2){
        cout<<-1<<'\n';
    }
    
    else{
        for(int i=1;i<=n*n;i++){
            if(i%2!=0){
                v.push_back(i);
            }
        }
        for(int i=1;i<=n*n;i++){
            if(i%2==0){
                v.push_back(i);
            }
        }
        for(int i=0;i<n*n;i++){
            cout<<v[i]<<" ";
            if((i+1)%n==0){
                cout<<'\n';
            }
        }
        //cout<<'\n';
    }
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}