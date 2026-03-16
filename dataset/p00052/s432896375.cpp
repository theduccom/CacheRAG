#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;

int main(void)
{
   int n;
   while(cin>>n){
       if(n==0) return 0;
       int ans =0;
       while(n>0){
           ans += n/5;
           n/=5;
       }
       cout<<ans<<endl;
   }
   return 0;
}
