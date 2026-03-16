#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int a,b,sum=0,ave=0,i=0;
    while(scanf("%d,%d",&a,&b)!=EOF){
        sum+=(a*b);
        ave+=b;
        i++;
    }
    double c=ave;
    
    printf("%d\n%d\n",sum,(int)(c/i+0.5));
	return 0;
}