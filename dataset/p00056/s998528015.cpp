#include <iostream>
using namespace std;


int main(){
   bool is_prime[100000];
   is_prime[0]=is_prime[1]=false;
   for(int i=2;i<100000;i++)
      is_prime[i]=true;
   for(int i=2;i*i<100000;i++){
      if(is_prime[i]){
         for(int j=i*i;j<100000;j+=i){
            is_prime[j]=false;
         }
      }
   }
   while(true){
      int count=0;
      int n;
      cin >> n;
      if(n==0){
         break;
      }else{
         for(int i=2;i<n/2+1;i++){
            if(is_prime[i]&&is_prime[n-i])
                count++;
          }
         cout << count << endl;
      }
   }
   return 0;
}