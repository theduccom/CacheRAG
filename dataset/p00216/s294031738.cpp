#include<bits/stdc++.h>
using namespace std;
int main(){

   while(1){
    int n,ans=1150,m;
    cin >> n;
    if(n==-1)break;
    if(n>10){
        m=n-10;
        if(m>=10)m=10;
        ans+=m*125;
        m=0;
    }
    if(n>20){
        m=n-20;
        if(m>=10)m=10;
        ans+=m*140;
        m=0;
    }
    if(n>30){
        m=n-30;
        ans+=m*160;
        m=0;
    }
    ans=4280-ans;
    cout << ans << endl;
   }

return 0;
}