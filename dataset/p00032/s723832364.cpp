#include<iostream>
using namespace std;
int main(){
	int a, b, c, t = 0, h = 0;
	char d, e;
	while (cin >> a >> d >> b >> e >> c){
		if (a*a + b*b == c*c)t++;
		else if (a == b)h++;
	}
	cout << t << endl;
	cout << h << endl;
	return 0;
}
