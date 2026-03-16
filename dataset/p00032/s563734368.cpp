#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;

int main(){
	int a,b,c;
	int ty=0,hi=0;
	
	while(scanf("%d,%d,%d",&a,&b,&c)!=EOF){
		if(a==b)
		hi++;
		else if((a*a)+(b*b)==(c*c))
		ty++;
	}
	printf("%d\n%d\n",ty,hi);
}