#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int i,j,k;
	int n,sum;
	while(1) {
		cin>>n;
		if(n==-1) break;
		sum=4280-1150;
		for(i=0;i<n;i++) {
			if(i<10) {}
			else if(i<20) sum-=125;
			else if(i<30) sum-=140;
			else sum-=160;
		}
		cout<<sum<<endl;
	}
}