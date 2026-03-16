#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <math.h>
using namespace std;

int main(){
	int l[10],v1,v2,s;
	double c;
	while(scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",&l[0],&l[1],&l[2],&l[3],&l[4],&l[5],&l[6],&l[7],&l[8],&l[9],&v1,&v2)!=EOF){
		s=0;
		for(int i=0;i<10;i++)s+=l[i];
		c=(double)s/(v1+v2)*v1;
		for(int i=0;i<10;i++){
			c-=l[i];
			if(c<=0){cout<<i+1<<endl;break;}
		}
	}
}