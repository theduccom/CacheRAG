#include <iostream>
using namespace std;

int main(void){
  int in;
  cin >> in;
  for(int i = 0; i < in; i++){
    string event;
    int outCnt = 0, fb = 0, sb = 0, tb = 0, score = 0;
    while(outCnt != 3 && cin >> event){
      if(event == "HIT") { score += tb; tb = sb; sb = fb; fb = 1; }
      if(event == "HOMERUN") { score += fb + sb + tb + 1; fb = 0; sb = 0; tb = 0;};
      if(event == "OUT") outCnt++;
    }
    cout << score << endl;
  }
  return 0;
}