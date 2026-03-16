#include <iostream>
#define MAX 1000000
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
   
   int n;
   while (cin >> n,n){
      int sum = 0;
      int num = 0;
      while(n){
	 if(p[num]) {
	    sum += num;
	    n--;
	 }
	 num ++;
      }
      cout << sum << endl;
   }

  return 0;
}