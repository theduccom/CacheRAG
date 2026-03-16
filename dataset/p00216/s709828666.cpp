#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  int w, c;

  while(1){
    cin >> w;
    if(w == -1){
      break;
    }
    c = 1150;

    w -= 10;
    if(w <= 0){
      cout << (4280-c) << endl;
      continue;
    }

    w -= 10;
    if(w <= 0){
      cout << (4280-(c+(w+10)*125)) << endl;
      continue;
    }
    c += 1250;
    w -= 10;
    if(w <= 0){
      cout << (4280-(c+(w+10)*140)) << endl;
      continue;
    }
    c += 1400;

    cout << (4280-(c+160*w)) << endl;
  }

  return 0;
}