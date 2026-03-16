#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>

using namespace std;

int main(void)
{
	double v, y, t, h, n;
	
	while(cin >> v){
		t = v / 9.8;
		y = 4.9 * t * t;
		n = (y + 5) / 5;
		n = (int) (ceil (n) );
		cout << n << endl;
	}
	
	return 0;
}