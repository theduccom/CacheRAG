#include <iostream>
using namespace std;

int main(){

  int n;
  cin >> n;
  while(n){
    int out = 0,hit = 0,point= 0;
    while(out != 3){
      string s;
      cin >> s;
      if(s == "OUT") out++;
      else if(s == "HIT"){
	hit++;
	if(hit == 4){
	  point++;
	  hit = 3;
	}
      }
      else if(s == "HOMERUN"){
	point += hit + 1;
	hit = 0;
      }
     
    }
    cout << point<<endl;
    n--;
  }
  return 0;
}