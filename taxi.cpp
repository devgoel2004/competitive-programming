#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count[5]={0};
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    int ans = count[2]/2+count[3]+count[4];
    count[1]=count[1]-count[3];
    if(count[2]%2==1){
        ans+=1;
        count[1]-=2;
    }
    if(count[1]>0){
        ans+=(count[1]+3)/4;
    }
    cout<<ans<<'\n';
    return 0;
}