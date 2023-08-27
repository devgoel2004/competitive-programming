#include<bits/stdc++.h>
using namespace std;
int binary(int arr[], int l, int r, int x){
    while(l<=r){
        int mid = (l+r)/2;
        if(arr[mid]==x){
            return mid+1;
        }
        else if(arr[mid]<x){
            l = mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return -1;
}
int main(){
    int n,x;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>x;
        a[i]=x;
    }
    sort(a,a+n);
    int w;
    cin>>w;
    for(int i=0;i<w;i++){
        int y;
        cin>>y;
        int ans = upper_bound(a,a+n,y)-a;
        cout<<ans<<endl;
    }
    return 0;
}