#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int i;
	double v,y,src;
	while(cin >> v){
		y=4.9*(v/9.8)*(v/9.8);
		cout << ceil(y/5)+1 << endl;
	}
}