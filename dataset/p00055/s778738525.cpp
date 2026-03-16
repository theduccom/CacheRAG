#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	double a;
	double s[12];
	while (cin >> a){
		s[1] = a;
		for (int i = 2; i != 11; i++){
			if (i % 2 == 0)s[i] = s[i - 1] * 2;
			else s[i] = s[i - 1] / 3;
		}
		printf("%.8f\n", s[1] + s[2] + s[3] + s[4] + s[5] + s[6] + s[7] + s[8] + s[9] + s[10]);
	}
}