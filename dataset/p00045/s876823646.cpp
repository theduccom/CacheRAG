#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	int sum,ave,num;
	int c,t;
	double h;

	sum=0;
	h=0;
	num=0;
	while(scanf("%d,%d",&c,&t)!=EOF){
		sum+=c*t;
		h+=t;
		num++;
	}
	h=(double)h/(double)num+0.5;
	ave=h;
	printf("%d\n%d\n",sum,ave);
	return 0;
}