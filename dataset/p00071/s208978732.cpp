#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<cctype>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<map>

using namespace std;
const int dx[] = {1,0,-1,0},dy[] = {0,1,0,-1};
#define INF 999999
#define rep(i,j) for(int i=0;i<(j);i++)
#define reps(i,j,k) for(int i=j;i<(k);i++)
typedef long long ll;
typedef unsigned long long ull;
void dfs(int y,int x);
char stage[16][16];

int main(){
	int n;
	scanf("%d",&n);
	rep(q,n){
		getchar();
		memset(stage,0,sizeof(stage));
		rep(i,8)scanf("%s",stage[i]);
		int x,y;
		scanf("%d%d",&x,&y);
		dfs(y-1,x-1);
		printf("Data %d:\n",q+1);
		rep(i,8)printf("%s\n",stage[i]);
	}
	return 0;
}
void dfs(int y,int x){
    rep(i,4){
        if(x+i > 7)break;
        if(stage[y][x+i] == '1'){
            stage[y][x+i] = '0';
            dfs(y,x+i);
        }
    }
    rep(i,4){
        if(x-i < 0)break;
        if(stage[y][x-i] == '1'){
            stage[y][x-i] = '0';
            dfs(y,x-i);
        }
    }
    rep(i,4){
        if(y+i > 7)break;
        if(stage[y+i][x] == '1'){
            stage[y+i][x] = '0';
            dfs(y+i,x);
        }
    }
    rep(i,4){
        if(y-i < 0)break;
        if(stage[y-i][x] == '1'){
            stage[y-i][x] = '0';
            dfs(y-i,x);
        }
    }
    return ;
}