#include <iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  string s;
  int out=0,b=0,p= 0;
  while(n){

    while(1){
      cin >> s;
      if(s == "OUT" && out == 2){
	out = 0; b = 0;
	cout << p << endl;
	p = 0;
	break;
      } 
      if(s == "OUT") out++;
      if(s == "HIT"){
	if(b == 3 ) p++;
	else b++;
      }
      if(s == "HOMERUN"){
	p += b + 1;
	b = 0;
      }
    }
    n--;
  }

  return 0;
}