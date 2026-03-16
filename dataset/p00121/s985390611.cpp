#include<iostream>
#include<algorithm>
#include<queue>
#include<set>
using namespace std;

queue<pair<int,int> >Q;
set<int> S;
vector<pair<int,int> >V;

int c[2][4];
void PULL(int q){
	for(int i=0;i<8;i++){
		c[i/4][i%4]=q%8;
		q/=8;
	}
}
int PUSH(){
	int ret=0,w=1;
	for(int i=0;i<8;i++){
		ret+=c[i/4][i%4]*w;
		w*=8;
	}
	return ret;
}

void BFS(int q,int len){
	V.push_back(make_pair(q,len));
	PULL(q);
	int x,y;
	for(int i=0;i<8;i++)if(c[i/4][i%4]==0)x=i/4,y=i%4;
	int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
	for(int i=0;i<4;i++){
		int xx=dx[i]+x,yy=dy[i]+y;
		if(xx>=0&&xx<2&&yy>=0&&yy<4){
			swap(c[xx][yy],c[x][y]);
			int k=PUSH();
			if(S.find(k)==S.end()){
				S.insert(k);
				Q.push(make_pair(k,len+1));
			}
			swap(c[xx][yy],c[x][y]);
		}
	}
}

int main(){
	for(int i=0;i<8;i++)c[i/4][i%4]=i;
	Q.push(make_pair(PUSH(),0));S.insert(PUSH());
	while(!Q.empty()){
		BFS(Q.front().first,Q.front().second);
		Q.pop();
	}
	while(cin>>c[0][0]){
		for(int i=1;i<8;i++)cin>>c[i/4][i%4];
		int k=PUSH();
		for(int i=0;i<V.size();i++){
			if(V[i].first==k)cout<<V[i].second<<endl;
		}
	}
	return 0;
}