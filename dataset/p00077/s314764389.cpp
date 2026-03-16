#include <iostream>
using namespace std;

int main(void){
  string bc;
  while(cin >> bc){
    string ac = "";
    for(int i = 0; i < bc.size(); i++){
      if(bc[i] == '@'){
        for(int j = 0; j < (bc[i+1] - '0'); j++) ac += bc[i+2];
        i += 2;
      }else{
        ac += bc[i];
      }
    }
    cout << ac << endl;
  }
  return 0;
}