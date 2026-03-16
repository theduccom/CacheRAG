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
	int n,x,y;
	queue<pii> q;
	int dx[]={1,0,-1,0},dy[]={0,1,0,-1};
	char s[9][9];
	scanf("%d",&n);
	rep(k,n){
		gets(s[0]);
		rep(i,8){
			scanf("%s",s[i]);
		}
		scanf("%d%d",&x,&y);
		q.push(pii(--x,--y));
		s[y][x]='0';
		while(!q.empty()){
			x=q.front().first;
			y=q.front().second;
			q.pop();
			rep(i,4)rep(j,4)if(in(x+dx[i]*j,0,7)&&in(y+dy[i]*j,0,7))
				if(s[y+dy[i]*j][x+dx[i]*j]=='1'){
					s[y+dy[i]*j][x+dx[i]*j]='0';
					q.push(pii(x+dx[i]*j,y+dy[i]*j));
				}
		}
		printf("Data %d:\n",k+1);
		rep(i,8)puts(s[i]);
	}
	return 0;
}