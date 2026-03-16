#include <iostream>

using namespace std;

int main(){
  int n;

  int omori[10] = {1,2,4,8,16,32,64,128,256,512};

  while( cin >> n){
  int used[10]={0,0,0,0,0,0,0,0,0,0};
    int i = 0;
    int f = 0;
    while(n){
      if(n >= omori[9-i]) {n -= omori[9-i];used[i] = omori[9-i];f++;}
      i++;
    }

    for(int j=9;j >= 0;j--){
      if(used[j] != 0 && f == 1){ cout << used[j] << endl;}
      if(used[j] != 0 && f != 1){ cout << used[j] << ' ' << flush;f--;}
    }
  }
  return 0;
}