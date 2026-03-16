#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(){

  long double n;
  while(cin >> n){
    long double sum=n;
    for(int i=2;i<=10;i++){
      if(i%2 == 0){
        n *= 2.;
      }
      else{
        n /= 3.;
      }
      sum += n;
	}
	cout << fixed
		<< setprecision(6)
		<< sum << endl;
  }
  return 0;
}