#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(void)
{
   int prime[50000];
   prime[0] = 2;
   prime[1] = 3;
   int ptr = 2;
   for(int num = 5; num <= 50100; num++){
       bool f = false;
       for(int i=0;i<ptr;i++){
           if(prime[i]*prime[i]>num){
               break;
           }
           if(num%prime[i]==0){
               f=true;
               break;
           }
       }
       if(!f){
           prime[ptr++] = num;
       }
   }
   int n;
   while(cin>>n){
       int j=0;
       while(prime[j]<=n){
           j++;
       }
       if(prime[j-1]==n){
           cout<<prime[j-2]<<" "<<prime[j];//printf("%d %d",prime[j-2],prime[j]);
       }else{
           cout<<prime[j-1]<<" "<<prime[j];//printf("%d %d",prime[j-1],prime[j]);
       }
       cout<<endl;
   }
   return 0;
}
