#include<iostream>
#include<cstdio>

using namespace std;

int main(void)
{
	int price[1000], amount[1000];
	int count = 0;
	int psum = 0;
	double asum = 0;
	double pave, aave;
	int ave;
	for(int i = 0; i < 1000; i++){
		scanf("%d,%d", &price[i], &amount[i]);
		if(price[i] == 0 && amount[i] == 0)
		break;
		count++;
		psum += price[i] * amount[i];
		asum += amount[i];
	}
	aave = asum/count;
	ave = aave;
	
	if(aave - ave >= 0.5)
	ave += 1;
	cout << psum << endl;
	cout << ave << endl;
	
	return 0;
}