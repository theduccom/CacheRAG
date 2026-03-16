#include <iostream>
using namespace std;

int main(){
  double minv;
  while(cin >> minv){
    double t = minv/9.8;
    double height = 4.9 * t * t;
    int floor = height/5.0 + 1;

    //切り上げ
    double remainder = height - (floor-1) * 5.0;
    if(remainder>0) floor++;
    cout << floor << endl;
  }
  return 0;
}