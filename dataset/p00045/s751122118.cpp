#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

int main(){
	int a = 0, s = 0, n = 0,b,c;
	while (scanf("%d,%d", &b, &c) + 1){
		s += (b*c);
		a += c;
		++n;
	}
	a = round((double)a / n);
	cout << s << endl << a << endl;
}