#include<stdio.h>
#include<string>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<string.h>
#include<map>
#include<queue>

using namespace std;

typedef pair<int,int> pii;

#define rep(i,j) for(int i=0;i<(j);i++)
#define reps(i,j,k) for(int i=j;i<=k;i++)
#define in(i,j,k) ((i)>=(j)&&(i)<=(k))


int main(){
	int x,h;
	double s;
	for(;;){
		scanf("%d%d",&x,&h);
		if(!x&&!h)break;
		s=x*x;
		s+=2*x*sqrt(x*x/4.0+h*h);
		printf("%f\n",s);
	}
	return 0;
}