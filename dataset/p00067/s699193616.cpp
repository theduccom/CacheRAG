#include <cstdio>
#include <cstring>
#include <queue>
using namespace std;
bool used[13][13]={};
char field[13][13];
typedef pair<int,int> P;
bool in(int x,int y){
	if(x>=0 && x<12 && y>=0 && y<12){
		return true;
	}
	return false;
}
int main(){
	while(scanf("%s",field[0])!=EOF){
		for(int i=1;i<12;i++){
			scanf("%s",field[i]);
		}
		for(int i=0;i<12;i++){
			for(int j=0;j<12;j++){
				if(field[i][j]=='1'){
					used[i][j]=false;
				}else{
					used[i][j]=true;
				}
			}
		}
		int ans=0;
		queue<P>que;
		for(int i=0;i<12;i++){
			for(int j=0;j<12;j++){
				if(!used[i][j]){
					ans++;
					que.push(make_pair(i,j));
					while(!que.empty()){
						P p=que.front();
						que.pop();
						int dx[4]={0,1,0,-1};
						int dy[4]={1,0,-1,0};
						for(int k=0;k<4;k++){
							if(in(p.first+dx[k],p.second+dy[k])){
								if(!used[p.first+dx[k]][p.second+dy[k]]){
									used[p.first+dx[k]][p.second+dy[k]]=true;
									que.push(make_pair(p.first+dx[k],p.second+dy[k]));
								}
							}
						}
					}
				}
			}
		}
		printf("%d\n",ans);
 	}
}