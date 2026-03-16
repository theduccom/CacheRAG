#include <queue>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

	int w,h;
	int xs,ys;
	int xg,yg;
	int n;
	while(cin>>w>>h&&!(w==0&&h==0)){
		int field[101][101];
		for(int i = 0; i < 101; i++)
			fill(field[i],field[i]+101,0);

		cin>>xs>>ys;
		cin>>xg>>yg;
		xs--;ys--;xg--;yg--;
		cin>>n;
		for(int i = 0; i < n; i++){
			int c,d,x,y;
			cin>>c>>d>>x>>y;
			x--;y--;
			if(d==0){
				for(int j = y; j < 2+y; j++){
					for(int k = x; k < x + 4; k++){
						field[j][k]=c;
					}
				}
			}
			else{
				for(int j = y; j < 4+y; j++){
					for(int k = x; k < x + 2; k++){
						field[j][k]=c;
					}
				}
			}
		}
		// bfs
		int c=field[ys][xs];

		if(c==0){
			cout<<"NG"<<endl;
			continue;
		}
		queue<pair<int,int> > *prv=new queue<pair<int,int> >();
		queue<pair<int,int> > *nxt=new queue<pair<int,int> >();

		const int dy[]={-1,0,0,1};
		const int dx[]={0,-1,1,0};

		bool passed[101][101];
		for(int i = 0; i < 101; i++)
			fill(passed[i],passed[i]+101,false);

		prv->push(make_pair(ys,xs));

		bool fin=false;
		while(prv->size()){
			while(prv->size()){
				pair<int,int> p = prv->front();
				prv->pop();
				if(p.first==yg&&p.second==xg){
					fin=true;
					break;
				}

				if(passed[p.first][p.second])
					continue;
				passed[p.first][p.second]=true;
				for(int i = 0; i < 4; i++){
					int ny=p.first+dy[i];
					int nx=p.second+dx[i];
					if(ny>=0&&nx>=0&&ny<h&&nx<w&&field[ny][nx]==c&&!passed[ny][nx]){
						nxt->push(make_pair(ny,nx));
					}
				}
			}
			if(fin)
				break;
			swap(prv,nxt);
		}
		if(fin){
			cout<<"OK"<<endl;
		}
		else
			cout<<"NG"<<endl;
		delete prv,nxt;
	}

	return 0;
}