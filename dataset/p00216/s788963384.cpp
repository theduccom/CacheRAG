#include <iostream>

using namespace std;

int main() {

  int w;

  int fee;


  while(1) {

    cin >> w;

    if(w==-1) break;

    fee=1150;

    if(w>30) fee+=160*(w-30);

    if(w>20) fee+=140*min(w-20,10);

    if(w>10) fee+=125*min(w-10,10);

    cout << 4280-fee << endl;

  }

  return 0;

}