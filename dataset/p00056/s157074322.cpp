#include <iostream>
#define MAX 50001
using namespace std;

int main(){
  
   bool p[MAX];
   p[0] = p[1] = false;
   for(int i=2;i<MAX;i++)p[i] = true;
   for(int i=2;i<MAX;i++){
      if(p[i]){
	 for(int j=i+i;j<MAX;j=j+i){
	    p[j] = false;
	 }
      }
   }
   
   int cnt[MAX];
   for(int i=0;i<MAX;i++) cnt[i] = 0;
   for(int i=0;i<MAX;i++){
      for(int j=i;i+j<MAX;j++){
	 if(p[i] && p[j]) cnt[i + j]++;
      }
   }  
   
   int n;
   while (cin >> n,n){
      cout << cnt[n] << endl;
   }
   return 0;
}