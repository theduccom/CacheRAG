#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	double n;
	while(scanf("%lf",&n)!=EOF){
	for(int i=1;i<=10009;i++){
	int y=i*5-5;
	double t=sqrt((double)y/4.9);
	if(t*9.8>=n){cout<<i<<endl;break;}
	}
	}
	return 0;
}