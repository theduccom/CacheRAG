#include<cstdio>
#include<cstring>
#include<algorithm>
#include<functional>
#include<vector>
#include<stack>
#include<queue>
#include<iostream>
using namespace std;
int main(void)
{
	int p,i,j,n,sum,ki;
	while(1) {
		cin >> n;
		if(n==-1) break;
		sum=1150;
		for(i=10;i<=n;i++) {
			if(i>10 && i<=20) sum+=125;
			if(i>20 && i<=30) sum+=140;
			if(i>30) sum+=160;
		}
		ki=4280;
		cout << ki-sum <<endl;
	}
	exit(0);
}