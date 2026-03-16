#include <iostream>

using namespace std;

int main(void){
  int ret=0;
  int a,b;
  int cases = 0;

  while(cin >> a >> b){

    if((a|b) == 0) break;
    if(cases) cout << endl;
    ret = 0;
    for(int i=a;i<=b;i++){
      if((i%4 == 0 && i%100 != 0) || i%400 == 0){
        ret++;
        cout << i << endl;
      }
    }
    if(!ret) cout << "NA" << endl;
    cases++;
  }
}