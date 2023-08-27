#include<bits/stdc++.h>
using namespace std;
int solve(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   } 
   int x=0,y=0;
   for(int i=0;i<n;i++){
    if(arr[0]==50 || arr[0]==100){
        cout<<"NO\n";
        return 0;
    }
      if(arr[i]==25){
        x++;
      }
      else if(arr[i]==50){
        y++;
      }
      else if(arr[i]==100 && arr[i]==50){
        x--;
        y--;
      }
      else if(arr[i]==100){
        x=x-3;
      }
      if(x<0){
        cout<<"NO\n";
        return 0;
      }
   }
   cout<<"YES\n";
   return 0;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
    solve();
    return 0;
}