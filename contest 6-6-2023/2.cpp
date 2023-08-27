#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main(){
    
    int t;
    cin>>t;
    vector <ll> v;
    
    while(t--){
        int x,y;
        cin>>x>>y;
        if(log2(x)<y){
            cout<<x+1<<'\n';
        }
        else{
            cout<<(int)pow(2,y)<<"\n";
        }
    }
    return 0;
}