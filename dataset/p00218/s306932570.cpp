#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

  int n;

  while(cin >> n, n){

    int m,e,j;

    for(int i=0;i<n;i++){

      double ave,lank = 0,me;

      cin >> m >> e >> j;
      
      ave = m + e + j;
      ave /= 3;
      me = m + e;
      me /= 2;

      if(m == 100 || e == 100 || j == 100) lank = 3;

      

      if(lank != 3){
	if(me >= 90) lank = 3;
	else if(ave >= 80) lank = 3;
	else if(ave >= 70) lank = 2;
	else if(ave >= 50 && m >= 80 || e >= 80) lank = 2;
	else lank = 1;
      }

      if(lank == 3) cout << "A" << endl;
      else if(lank == 2) cout << "B" << endl;
      else cout << "C" << endl;

    }
  }
}