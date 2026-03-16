#include <iostream>
#include <string>

using namespace std;

int main(){
  int n;
  cin >> n;

  while(n){
    string s;
    int hit=0,out=0,point=0;
    while(1){
      cin >> s;
      if(s == "HIT"){
        hit++;
        if(hit > 3) point++,hit=3;
      }
      if(s == "HOMERUN"){
        point += hit+1;hit=0;
      }
      if(s == "OUT"){
        out++;
        if(out == 3) break;
      }
    }
    cout << point << endl;
    n--;
  }

  return 0;
}