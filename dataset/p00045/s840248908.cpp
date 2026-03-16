#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	int sump=0,sumn=0,i=0;
	int p,n;
	double aven;

	while(scanf("%d,%d",&p,&n)!=EOF){
		sump+=p*n;
		sumn+=n;
		i++;
	}
	aven=(double)sumn/i;
	//cout<<sumn<<endl;
	aven*=10;
	aven+=5;
	aven/=10;

	printf("%d\n%d\n",sump,(int)aven);

}