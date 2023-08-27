#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        int count=0;
        for(int i=0;i<n;i++){
            cin>>a[i]>>b[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]<=10){
                count=max(count,b[i]);
            }
        }
       // cout<<count<<'\n';
        for(int i=0;i<n;i++){
            if(b[i]==count){
                cout<<i+1<<'\n';
                break;
            }
        }   
    }
    return 0;
}