#include <iostream>
#include <cstdio>
using namespace std;

#define rep(i,a) for(int i = 0 ; i < a ; i ++)
#define loop(i,a,b) for(int i = a ; i < b ; i ++)

int N,M;
int maze[110][110],tim[110][110];
int main(void){
	while(cin>>N>>M,N+M){
		rep(i,M)rep(j,M)maze[i][j] = tim[i][j] = (1<<29);
		while(N--){
			int a,b,c,t;
			cin>>a>>b>>c>>t;
			maze[--a][--b] = c;
			maze[b][a] = c;
			tim[a][b] = t;
			tim[b][a] = t;
		}
		rep(k,M){
			rep(i,M){
				rep(j,M){
					tim[i][j] = min(tim[i][j],tim[i][k] + tim[k][j]);
					maze[i][j] = min(maze[i][j],maze[i][k] + maze[k][j]);	
				}
			}
		}
		//rep(i,M)rep(j,M)cout<<tim[i][j]<<(j==M-1?'\n':' ');
		cin>>N;
		while(N--){
			int a,b,t;
			cin>>a>>b>>t;
			--a;--b;
			cout<<(t?tim[a][b]:maze[a][b])<<endl;
		}
	}
}