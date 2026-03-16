#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main(void){

	int a,b;
	int sum=0;
	double ave=0,cnt=0;
	char str;
	while(scanf("%d%c%d",&a,&str,&b)!=EOF){
        sum+=a*b;
        ave+=b;
        cnt++;


	}

    printf("%d\n%d\n",sum,(int)(ave/cnt+0.5));

	return 0;
}