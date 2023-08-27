#include <bits/stdc++.h>
#define ll long long
#define all(a) a.begin(), a.end()
#define fastio ios::sync_with_stdio(false); cin.tie(0)
using namespace std;

int main(){
    fastio;
    ll t,n;
    cin>>n>>t;
    if(n>t){
        cout<<n-t;
    }
    else{
        int count=0;
        while(n!=t){
            if(n>t){
                count =count+n-t;
                break;
            }
            else if(t%2==0){
                t=t/2;
                count++;
            }
            else{
                t=t+1;
                count++;
            }
        }
        cout<<count<<'\n';
    }
    return 0;
}