#include <iostream>
#include <vector>
#include <cmath>


using namespace std;

int main(){
  int datasets = 0;
  cin >> datasets;

  for(int i=0;i<datasets;i++){
    double xa,ya,ra,xb,yb,rb;
    cin >> xa >> ya >> ra >> xb >> yb >> rb;

    //dis
    double dis = sqrt(pow(xa-xb, 2) + pow(ya-yb,2));
    
    if(ra+rb < dis){
      cout << "0" << endl;
      continue;
    }

    if(ra-rb > dis){
      cout << "2" << endl;
      continue;
    }

    if(rb-ra > dis){
      cout << "-2" << endl;
      continue;
    }

    if(ra+rb >= dis){
      cout << "1" << endl;
      continue;
    }
  }
}
      