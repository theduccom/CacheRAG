#include<iostream>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	int a, b, c, sum1,sum2;
	sum1 = 0;
	sum2 = 0;
	while (scanf("%d,%d,%d",&a,&b,&c)!=EOF) {
		if (a*a + b*b == c*c) {
			sum1 += 1;
		}
		if (a == b) {
			sum2 += 1;
		}
	}
	cout << sum1 << endl;
	cout << sum2 << endl;
	return 0;
}