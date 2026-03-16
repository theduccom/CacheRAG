#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double v, y;
	while(cin >> v){
	y = 4.9 * pow(v / 9.8, 2);
	int n;
	for(n = 0;;n++){
		if(y <= 5*n-5)break;
	}
	cout << n << endl;
	}
	return 0; 
}
//25.4
//32