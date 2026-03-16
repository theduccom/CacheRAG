#include <iostream>
#include <cmath>

using namespace std;

int main(void){
  int w;
  int i=0;

  while(cin >> w){
	while(w > 1){
	  if(w%2){
		cout << pow(2, i) << " ";
	  }
	  w /= 2;
	  i++;
	}
	if(w) cout << pow(2,i) << endl;
	i=0;
  }

  return 0;
}