#include<bits/stdc++.h>
#define INF 1e9
using namespace std;
typedef pair<int,int> P;

int main(){
	int w,h;
	while(cin>>w>>h,w,h){
		char board[114][514];
		int pass[114][514];
		
		int xs,ys,xg,yg;
		cin>>xs>>ys>>xg>>yg;
		
		for(int i=0;i<=110;i++){
		for(int j=0;j<=110;j++){pass[i][j]=INF;
			board[i][j]='#';
			}}
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			char a;
			int b,c,d;
			cin>>a>>b>>c>>d;
			
			if(b==0){
				for(int j=0;j<2;j++)
				for(int k=0;k<4;k++)board[d+j][c+k]=a;
				}
			else{
				for(int j=0;j<2;j++)
				for(int k=0;k<4;k++)board[d+k][c+j]=a;
				}	
			}
		
		queue<P>Q;
		Q.push(P(ys,xs));
		pass[ys][xs]=0;
		
		while(Q.size()){
			P p=Q.front();
			Q.pop();
			
			if(p.first==yg&&p.second==xg)break;
			
			int dir[2][4]={{1,0,-1,0},{0,1,0,-1}};
			for(int i=0;i<4;i++){
				int ny=p.first+dir[0][i];
				int nx=p.second+dir[1][i];
				
				if(0<=ny&&ny<=h&&0<=nx&&nx<=w&&board[ny][nx]==board[ys][xs]&&pass[ny][nx]==INF){
					Q.push(P(ny,nx));
					pass[ny][nx]=pass[p.first][p.second]+1;
					}
				}
			}
		
		if(pass[yg][xg]!=INF)cout<<"OK"<<endl;
		else cout<<"NG"<<endl;
		
		}
		return 0;
	}