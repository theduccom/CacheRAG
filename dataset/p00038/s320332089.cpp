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

bool st(int h[5]){
	bool f=true;
	rep(i,4)if(h[i+1]-h[i]!=1)f=false;
	return f;
}

int main(){
	int h[5],c[5],a,*e;
	char *s[]={
		"null","one pair","two pair","three card","straight","full house","four card",
	};
	while(~scanf("%d,%d,%d,%d,%d",h,h+1,h+2,h+3,h+4)){
		sort(h,h+5);
		if(h[0]==0)break;
		a=0;
		rep(i,5)c[i]=count(h,h+5,h[i]);
		int d=count(c,c+5,2);
		if(d==4)a=2;
		e=unique(c,c+5);
		sort(c,e);
		if(*(e-1)==4)a=6;
		else if(*c==2 && c[1]==3)a=5;
		else if(*(e-1)==3)a=3;
		else if(*(e-1)==2 && d==2)a=1;
		bool f=st(h);
		if(!f){
			rotate(h,h+1,h+5);
			replace(h,h+5,1,14);
			f=st(h);
		}
		if(f)a=4;
		puts(s[a]);
	}
	
	return 0;
}