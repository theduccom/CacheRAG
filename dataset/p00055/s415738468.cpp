#include<iostream>
#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<algorithm>
#include<queue>
#include<functional>
#include<iomanip>

#define INF 114514810

using namespace std;

long double num[10];
int main()
{
	while (cin>> num[0]){
		
		long double sum = num[0];
		int i;
		for (i = 1; i < 10; i++)
		{
			if (i % 2 == 1){
				num[i] = num[i - 1] * 2;
			}
			else if (i % 2 == 0){
				num[i] = num[i - 1] / 3;
			}
			sum += num[i];
		}
		cout << setprecision(10) << sum << endl;
	}
		return 0;
}