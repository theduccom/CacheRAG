#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	double v;
	while( cin >> v ){
		double t = v / 9.8;
		double y = 4.9 * t * t;
		int N = 1;
		while(1){
			if( (5 * N - 5) > y) break;
			N++;
		}
		cout << N << endl;
	}
}