#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
   while(n!=0) {
    if(m%2==0){
        m=m+1;
    }
    m=m/2;
    n--;
   }
   cout<<n<<endl;
   return 0;
}