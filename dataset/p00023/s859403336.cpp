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
	int n,a=0;
	double x[2],y[2],r[2],d;
	scanf("%d",&n);
	rep(i,n){
		rep(j,2)scanf("%lf%lf%lf",x+j,y+j,r+j);
		d=(x[0]-x[1])*(x[0]-x[1])+(y[0]-y[1])*(y[0]-y[1]);
		if(d<(r[0]-r[1])*(r[0]-r[1])){
			if(r[0]>r[1])a=2;
			else a=-2;
		}else if(d>(r[0]+r[1])*(r[0]+r[1]))a=0;
		else a=1;
		printf("%d\n",a);
	}
	return 0;
}