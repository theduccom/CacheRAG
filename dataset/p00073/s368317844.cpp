#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	for(;;){
		int x;
		int h;
		double S = 0;
		
		cin >> x >> h;
		
		if(x == 0 && h == 0){
			break;
		}
		
		S += x*x;
		S += x*(double)sqrt((x*(double)x/4)+(h*h))*2;
		
		printf("%lf\n",S);
	}
}