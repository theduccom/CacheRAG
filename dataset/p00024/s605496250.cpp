#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	double a;
	while(cin >> a){
		double y = a*a/19.6;
		for(int i=1;;i++){
			double h = double(5*i-5);
			if(y<=h){
				cout << i << endl;
				break;
			}
		}
	}
}