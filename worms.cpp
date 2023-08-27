#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int A[1000003];
int main(){
    int n,x=1,m,q;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>q;
        while(q--){
            A[x]=i;
            x++;
        }
    }
    cin>>m;
    while(m--){
        cin>>q;
        cout<<A[q]<<endl;
    }
    return 0;
}