#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define endl '\n'
int main(){
    ll t;
    cin>>t;
    ll arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    ll min = *min_element(arr,arr+t);
    //cout<<min;
    ll max = *max_element(arr,arr+t);
    //cout<<max;
    ll x=0,y=0;
    for(int i=0;i<t;i++){
        if(arr[i]==min){
            x++;
        }
        else if(arr[i]==max){
            y++;
        }
    }
    //cout<<x<<y;
    ll ans = x*y;
    if(max==min){
        ans = (x*(x-1))/2;
    }
    cout<<max-min<<" "<<ans<<endl;
    return 0;
}