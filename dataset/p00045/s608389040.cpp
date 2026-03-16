#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int a, b;
	int sum, count;
	double avg;
	sum = 0; count = 0; avg = 0.0;
	while (scanf("%d,%d",&a, &b) != EOF) {
		sum += a*b;
		avg += (double)b;
		count++;
	}
	avg /= (double)count;
	cout<<sum<<endl;
	cout<<(int)(avg+0.5)<<endl;
}