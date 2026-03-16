#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	double d;
	while(cin >> d){
		d *= 7.81481481;
		printf("%.7f\n",d);
	}
	return 0;
}