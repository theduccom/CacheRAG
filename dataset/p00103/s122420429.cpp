#include <iostream>
#include <string>
using namespace std;

int main(){
  int end;
  cin >> end;
  for(int ining=0;ining<end;ining++){
    int score=0;
    string input;
    bool runner[3];
    for(int i=0;i<3;i++) runner[i]=false;
    int runnum=0;
    int out=0;
    while(1){
      cin >> input;
      if(input=="HIT"){
	if(runner[2]){
	  runner[2]=false;
	  score++;
	  runnum--;
	}
	if(runner[1]){
	  runner[1]=false;
	  runner[2]=true;
	}
	if(runner[0]){
	  runner[0]=false;
	  runner[1]=true;
	}
	runner[0]=true;
	runnum++;
      }
      else if(input=="HOMERUN"){
	score+=runnum+1;
	for(int i=0;i<3;i++) runner[i]=false;
	runnum=0;
      }
      else if(input=="OUT"){
	out++;
      }
      if(out==3) break;
    }
    cout << score << endl;
  }
  return 0;
}