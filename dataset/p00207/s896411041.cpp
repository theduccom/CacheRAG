#include <iostream>
#include <queue>
using namespace std;
typedef pair<int,int> P;

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int map[110][110];
bool maze[110][110];
int xs,ys,xg,yg,w,h;

bool bfs(int col){
	queue<P> que;
	que.push(P(ys,xs));
	maze[ys][xs]=true;

	while(que.size()){
		P p=que.front();que.pop();
		if(p.first==yg && p.second==xg) return true;
		
		for(int i=0;i<4;i++){
			int ny=p.first+dy[i],nx=p.second+dx[i];
			if(ny>0 && ny<=h && nx>0 && nx<=w && !maze[ny][nx] && map[ny][nx]==col){
				maze[ny][nx]=true;
				que.push(P(ny,nx));
			}
		}
	}

	return false;
}

int main(){
	while(cin>>w>>h){
		if(w==0 && h==0) break;
		
		for(int i=0;i<110;i++){
			for(int j=0;j<110;j++){
				map[i][j]=0;
				maze[i][j]=false;
			}
		}

		int n;
		cin>>xs>>ys>>xg>>yg>>n;
		
		for(int i=0;i<n;i++){
			int c,d,x,y;
			cin>>c>>d>>x>>y;
			
			if(d==0){
				for(int j=y;j<y+2;++j){
					for(int k=x;k<x+4;++k){
						map[j][k]=c;
					}
				}
			}else{
				for(int j=y;j<y+4;++j){
					for(int k=x;k<x+2;++k){
						map[j][k]=c;
					}
				}
			}
		}

		if(bfs(map[ys][xs])) cout<<"OK"<<endl;
		else cout<<"NG"<<endl;
	}
	return 0;
}

			