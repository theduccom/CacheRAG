#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){
	int tmp0,tmp1;
	int n=0;
	int sum0=0,sum1=0;

	char unko;
	while(cin>>tmp0){
		cin>>unko;
		cin>>tmp1;
		sum0+=tmp0*tmp1;
		sum1+=tmp1;
		n++;
	}
	double ans2=sum1/(double)n;
	cout<<sum0<<endl;
	cout<<(int)(ans2+0.5)<<endl;
}

/*
Sample Input
100,20
50,10
70,35
Output for the Sample Input
4950
22

*/