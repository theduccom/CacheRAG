#include<stdio.h>
#include<string>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<string.h>

using namespace std;

typedef pair<int,int> pii;

#define rep(i,j) for(int i=0;i<(j);i++)
#define reps(i,j,k) for(int i=j;i<=k;i++)


int main(){
	int w,h;
	char s[1001][1001];
	for(;;){
		scanf("%d%d",&h,&w);
		if(h==0&&w==0)break;
		rep(i,h)scanf("%s",s[i]);
		int x,y;
		x=y=0;
		while(s[y][x]!='.' && s[y][x]!='l'){
			char c=s[y][x];
			s[y][x]='l';
			if(c=='v')y++;
			else if(c=='^')y--;
			else if(c=='>')x++;
			else if(c=='<')x--;
		}
		if(s[y][x]=='.')printf("%d %d\n",x,y);
		else puts("LOOP");
	}
	return 0;
}