#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
	int a,b,sum=0,cnt=0,num=0;
	while(scanf("%d,%d",&a,&b)>0){
		sum+=(a*b);cnt++;num+=b;
	}
	double ave=(double)num/(double)cnt;
	int avei=round(ave);
	cout<<sum<<endl<<avei<<endl;
	return 0;
}