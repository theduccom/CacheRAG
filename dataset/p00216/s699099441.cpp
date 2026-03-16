#include<iostream>

using namespace std;


int main(){

  int in, data[4];

  while(1){

    cin >> in;

    if(in == -1) break;

    int w = 1150;

    for(int i = 0; i < 3; i++){
      if(in >= 10) data[i] = 10;
      else data[i] = in;
      in -= 10;
    }
    data[3] = in;

    for(int i = 0; i < 4; i++){
      if(data[i] < 0) data[i] = 0;
    }

    w += 125 * data[1];
    w += 140 * data[2];
    w += 160 * data[3];
    w = 4280 - w;
    cout << w << endl;
  }

  return 0; 
}