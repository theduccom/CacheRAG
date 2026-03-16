#include<cstdio>
#include<vector>
#include<queue>
#include<cstring>
#include<algorithm>
using namespace std;

int cf[10];
int vis[1000000];
struct node {
	int num[10];
	int place;
	int Code() {
		int ret=0;
		for(int i=0;i<8;i++) {
			int cnt=0;
			for(int j=i+1;j<8;j++)
				if(num[i]>num[j])
					cnt++;
			ret+=cnt*cf[8-i];
		}
		return ret;
	}
}p;

void Dfs(node x,int dep);
void Change(node tmp,int x,int y,int tdep) {
	swap(tmp.num[x],tmp.num[y]);
	tmp.place=y;
	Dfs(tmp,tdep);
}
void Dfs(node x,int dep) {
	if(dep>50) return ;
	int code=x.Code();
	if(vis[code]!=-1)
		if(vis[code]<dep)
			return ;
	vis[code]=dep;
	int &res=x.place;
	if(res%4!=0) Change(x,res,res-1,dep+1);
	if(res%4!=3) Change(x,res,res+1,dep+1);
	if(res<4)
		Change(x,res,res+4,dep+1);
	else Change(x,res,res-4,dep+1);
}
int main() {
	memset(vis,-1,sizeof(vis));
	cf[0]=1;
	for(int i=1;i<=9;i++)
		cf[i]=cf[i-1]*i;
	for(int i=0;i<8;i++)
		p.num[i]=i;
	p.place=0;
	Dfs(p,0);
	while(~scanf("%d",&p.num[0])) {
		for(int i=1;i<8;i++)
			scanf("%d",&p.num[i]);
		printf("%d\n",vis[p.Code()]);
	}
	return 0;
}
