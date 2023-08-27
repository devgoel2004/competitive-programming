#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m,k,H;
    cin>>n>>m>>k>>H;
    vector <int> a;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
    }
    queue <int> q;
    q.push(1);
    q.push(2);
    int sum=0;
    for(int i=0;i<n;i++){
        int diff = abs(H-a[i]);
        bool flag1= q.size() && diff%k==0;
        bool flag2 = q.size() && diff<=(m-1)%k;
        bool flag3 =q.size() && diff;
        if(q.size() && flag1 && flag2 && flag3)sum++;

    }
    cout<<sum<<'\n';

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}