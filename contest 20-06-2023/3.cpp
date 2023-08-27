#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x;
        cin>>x;
        long long sum=0;
        while(x){
        sum = sum+x;
        x=x/2;
        }
        cout<<sum<<'\n';
    }
    return 0;
}