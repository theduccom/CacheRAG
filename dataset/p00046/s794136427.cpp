#include<iostream>
using namespace std;
int main(){
	double a, min = 10000000, max=-1;
	while (cin >> a){
		if (a < min){
			min = a;
		}
		if (a>max){
			max = a;
		}
	}
	cout << max - min << endl;
	return 0;
}
