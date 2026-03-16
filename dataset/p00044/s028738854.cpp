#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
vector<int> sosu(60000, 1);

void eratos() {
  for(int i = 2; i < 30000; i++) {
    sosu[2*i] = 0;
  }
  for(int i = 3; i < sqrt(60000); i+=2) {
    if(sosu[i] == 1) {
      for(int j = 1; i*(j+2) < 60000; j++) {
	sosu[i*(j+2)] = 0;
      }
    }
  }
}

int main() {
  eratos();
  int n, i;

  while(cin >> n) {
    
    for(i = n-1; i >= 0; i--){
      if(sosu[i] == 1) {
	cout << i << ' ';
	break;
      }
    }
   
    for(i = n+1; i < 60000; i++){
      if(sosu[i] == 1) {
	cout << i << endl;
	break;
      }
    }
  }
  return 0;
}
