#include <iostream>
#include <string>
using namespace std;

int main(){
   int a[4];
   int score,n;
   int out = 0;
   string in;
   cin >> n;
   for(int i=0;i<n;i++){
      a[3] = a[2] = a[1] = a[0] = 0;
      out   = 0;
      score = 0;
      while(out!=3){
	 cin >> in;
	 if(in ==  "HIT"){
	    a[3] = a[2];
	    a[2] = a[1];
	    a[1] = a[0];
	    a[0] = 1;
	    if(a[3] == 1){
	       score++;
	       a[3] = 0;
	    }
	 }
	 else if(in == "HOMERUN"){
	    score += a[2]+a[1]+a[0]+1;
	    a[2] = a[1] = a[0] = 0;
	 }
	 else if(in ==  "OUT"){
	    out++;
	 }
      }
      cout << score << endl;
   }
   return 0;
}