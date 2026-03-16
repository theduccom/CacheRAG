#include<iostream>
#include<algorithm>
#include<string>
#include<queue>
	using namespace std;
	
	int xs,ys,w,h,n,ban[111][111],xg,yg;bool visited[101][101];
		int vecx[4]={1,0,-1,0},vecy[4]={0,1,0,-1};
	struct P{
		int xx,yy;
	};	
	
	queue<P> jo;
	bool bfs(void){	
		while(!jo.size()==0){
		P now=jo.front();jo.pop();
		if(now.xx==-1||now.yy==-1)return false;
		if(now.xx==xg&&now.yy==yg)return true;
		int x=now.xx,y=now.yy;
		for(int i=0;i<4;i++){
			if(ban[x+vecx[i]][y+vecy[i]]==ban[xs][ys]){
				if(!visited[x+vecx[i]][y+vecy[i]]){
				P next={x+vecx[i],y+vecy[i]};
				visited[x+vecx[i]][y+vecy[i]]=true;
				jo.push(next);
				}
			}
		}
	}
		return 0;
	}

int main(){

	while(cin>>w>>h&&w&&h){
	cin>>xs>>ys>>xg>>yg>>n;
		P start={xs,ys};
	jo.push(start);
	for(int i=0;i<101;i++)
	for(int j=0;j<101;j++)ban[i][j]=-1,visited[i][j]=false;
	
	for(int i=0;i<n;i++){
		int c,d,x,y;
		cin>>c>>d>>x>>y;
		if(!d){
			for(int i=x;i<x+4;i++){
				for(int j=y;j<y+2;j++){
					ban[i][j]=c;
				}
			}
		}
		else{
		for(int i=x;i<x+2;i++){
				for(int j=y;j<y+4;j++){
					ban[i][j]=c;
				}
			}
		}
		}
		if(bfs())cout<<"OK"<<endl;
	else cout<<"NG"<<endl;
	}
	return 0;
	}