#include <queue>
#include <iostream>
#include <map>
using namespace std;
typedef vector<int> A;
typedef vector<A> M;
#define REP(i,x)for(int i=0;i<x;i++)
int d[4]={0,1,0,-1};
int main() {
	queue<M> que;
	map<M,int> mindist;
	M m(2,A(4));
	REP(i,2)REP(j,4)m[i][j]=i*4+j;
	que.push(m);
	while(!que.empty()){
		M now=que.front();que.pop();
		int time=mindist[now];
		REP(i,2)REP(j,4)if(now[i][j]==0)REP(k,4){
				int ni=i+d[k],nj=j+d[k^1];
				if(ni>=0&&ni<2&&nj>=0&&nj<4){
					swap(now[i][j],now[ni][nj]);
					if(mindist.count(now)==0){
						mindist[now]=time+1;
						que.push(now);
					}
					swap(now[i][j],now[ni][nj]);
				}
			}
	}
	while(cin>>m[0][0]>>m[0][1]>>m[0][2]>>m[0][3]>>m[1][0]>>m[1][1]>>m[1][2]>>m[1][3]){
		cout<<mindist[m]<<endl;
	}
	return 0;
}