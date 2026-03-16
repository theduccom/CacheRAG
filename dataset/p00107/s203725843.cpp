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

using namespace std;

typedef pair<int,int> pii;

#define rep(i,j) for(int i=0;i<(j);i++)
#define reps(i,j,k) for(int i=j;i<=k;i++)


int main(){
	int h[3],r,n;
	int t;
	for(;;){
		rep(i,3)scanf("%d",h+i);
		sort(h,h+3);
		if(h[2]==0)break;
		t=(h[0]*h[0]+h[1]*h[1]);
		scanf("%d",&n);
		rep(i,n){
			scanf("%d",&r);
			puts(r*r*4>t?"OK":"NA");
		}
	}
	return 0;
}