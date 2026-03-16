#include <iostream>

using namespace std;

int main () {
  int w;

  while(cin >> w){
    bool space = false;

    for(int r = 0; r < 10; r++){
      if(w >> r & 1 == 1) {
        if(space)
          cout << ' ';
        else
          space = true;
        cout << (1 << r);
      }
    }

    cout << endl;
  }

}