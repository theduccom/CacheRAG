#include<iostream>

using namespace std;

int main(){
  double vel;
  while(cin >> vel){
	double t,y,n=1;
	t = vel/9.8;
	y = 4.9*t*t;
	while(y > 5*n-5)n++;
	cout << n << endl;
  }
  return 0;
}