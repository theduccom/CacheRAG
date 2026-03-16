#include <iostream>
#include <string>
using namespace std;

main(){
  int i,j,n,b1,b2,b3,run,score,out;
  string str;
  cin >> n;

  for(i=0;i<n;i++){
    b1 = b2 = b3 = score = out = run = 0;

    while(out < 3){
      cin >> str;
      if(str == "OUT") out++;
      else if(str == "HIT"){
	if(b1 == 0){
	  b1 = 1;
	  run++;
	}
	else if(b2 == 0){
	  b2 = 1;
	  run++;
	}
	else if(b3 == 0){
	  b3 = 1;
	  run++;
	}
	else score++;
      }
      else if(str == "HOMERUN"){
	score += run + 1;
	b1 = b2 = b3 = run = 0;
      }
    }

    cout << score << endl;
  }
  return 0;
}