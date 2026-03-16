#include <iostream>
using namespace std;

int main(){
  int w;


  while(cin >> w , w != -1){

    int k = 1150;
    if(w <= 10){
      cout << 4280 - k << endl;
    }
    if(w > 10){
      for(int i = 0; i < min(w-10, 10) ; i++){
	k += 125;
      }
    }
    if(w > 20){
      for(int i = 0; i < min(w-20, 10)  ; i++){
	k += 140;
      }
    }
    if(w > 30){
      for(int i = 0; i < w-30 ; i++){
	k += 160;
      }
    }
    if(w > 10) cout << 4280-k << endl;


  }

  return 0;

}