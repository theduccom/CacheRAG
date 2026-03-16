#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	int value,num;
	int total,ave;
	int kai;
	total=ave=0;
	kai=0;
	while(scanf("%d,%d",&value,&num) != EOF){
		total+=value*num;
		ave+=num;
		kai++;
	}
	ave=(double)ave/(double)kai+0.5;
	cout<<total<<endl;
	cout<<ave<<endl;
	return 0;
}