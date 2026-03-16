#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int a,b,c;
	char com;
	int t = 0;
	int h = 0;
	while(cin >> a >> com >> b >> com >> c){
		if(a*a+b*b==c*c) t++;
		else if(a==b) h++;
	}
	cout << t << endl;
cout << h << endl;
}