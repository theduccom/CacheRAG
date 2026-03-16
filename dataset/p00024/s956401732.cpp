#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
	double v, t;
	int n;
	while(cin >> v){
	n = 0;
	for(int i = 0; 4.9*(v/9.8)*(v/9.8) > 5*i-5 ; i++){
		n++;
	}
	cout << n << endl;
	}
}