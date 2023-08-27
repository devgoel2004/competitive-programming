#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve(){
    ll x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2){
        cout<<x1+(abs(y2-y1))<<" "<<y2<<" "<<x1+abs(y2-y1)<<" "<<y1<<endl;
    }
    else if(y1==y2){
        cout<<x1<<" "<<y1+abs(x2-x1)<<" "<<x2<<" "<<y1+abs(x2-x1)<<endl;
    }
    else if(abs(x2-x1)==abs(y2-y1)){
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}
int main(){
    solve();
    return 0;
}