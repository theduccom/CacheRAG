#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <math.h>
using namespace std;

int main(){
	
	int a,b,c,m=0,n=0;
	while(scanf("%d,%d,%d",&a,&b,&c)!=EOF){
		if(a==EOF)break;
		if(a*a+b*b==c*c)m++;
		if(a==b)n++;
	}
	cout<<m<<endl<<n<<endl;
}