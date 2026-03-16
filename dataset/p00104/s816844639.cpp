#include <cstdio>
#include <string>
#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
typedef pair<int,int> P;
bool field[101][101]={};
char a[101][101];
int main(){
	int n,m;
	while(scanf("%d %d",&n,&m) && n){
		for(int i=0;i<n;i++){
			scanf("%s",a[i]);
		}
		memset(field,0,sizeof(field));
		queue<P>que;
		que.push(make_pair(0,0));
		while(!que.empty()){
			P p=que.front();
			int x=p.first;
			int y=p.second;
			que.pop();
			if(field[x][y]){
				puts("LOOP");
			}else if(a[x][y]=='>'){
				que.push(make_pair(x,y+1));
			}else if(a[x][y]=='v'){
				que.push(make_pair(x+1,y));
			}else if(a[x][y]=='<'){
				que.push(make_pair(x,y-1));
			}else if(a[x][y]=='^'){
				que.push(make_pair(x-1,y));
			}else{
				printf("%d %d\n",y,x);
			}
			field[x][y]=true;
		}
	}
}