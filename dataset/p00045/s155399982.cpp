#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
	int price, quantity;
	int sum=0, average, sum_q=0;
	int n=0;
	while( scanf("%d,%d", &price, &quantity) != EOF ){
		n++;
		sum += price*quantity;
		sum_q += quantity;
	}
	double tmp = (double)sum_q/n;
	double  ave = round(tmp);
	average = (int) ave;
	
	cout<<sum<<endl<<average<<endl;
	return 0;
}