#include <iostream>

using namespace std;

int main(){
  int n;
  while(cin >> n,n){
	int cnt2 = 0, cnt5 = 0;
	int tmp;
	while(n){
	  tmp = n;
	  while(1) {
		if(tmp % 2 == 0) {
		  cnt2++;
		  tmp /= 2;
		}
		else break;
	  }
	  tmp = n;
	  while(1){
		if(tmp % 5 == 0) {
		  cnt5++;
		  tmp /= 5;
		}
		else break;
	  }
	  n--;
	}
	cout << ((cnt2 < cnt5)? cnt2 : cnt5) << endl;
  }
  return 0;
}