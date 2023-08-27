#include<bits/stdc++.h>
using namespace std;
int cal(int x,int y, int n){
    x--;y--;
    x = min(x,n-x-1);
    y= min(y,n-y-1);
    return min(x,y);
}
int solve(){
    int n,x1,y1,x2,y2;
    cin>>n>>x1>>y1>>x2>>y2;
    cout<<abs(cal(x1,y1,n)-cal(x2,y2,n))<<'\n';
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