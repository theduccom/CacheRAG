#include <iostream>
#include <vector>
#include <cmath>


using namespace std;

int main(){
  double minv;
  while(cin >> minv){
    double y = 4.9*pow((minv/9.8), 2.0);
    int N = 1;
    while(true){
      if(y <= 5*N-5){
	break;
      }
      N++;
    }
    cout << N << endl;
  }
}
      