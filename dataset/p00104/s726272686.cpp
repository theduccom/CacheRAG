#include<bits/stdc++.h>
using namespace std;
#define all(vec) vec.begin(),vec.end()
typedef long long int ll;
typedef pair<int,int> P;
typedef pair<P,P> PP;
const ll MOD=10000;
const ll INF=1000000010;
const int MAX=100001;
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
int h,w;
char c[110][110];
bool visited[110][110];
void dfs(int x,int y){
	if(visited[y][x]){
		cout<<"LOOP"<<endl;
		return;
	}
	visited[y][x]=true;
	if(c[y][x]=='>'){
		dfs(x+1,y);
		return;
	}
	if(c[y][x]=='<'){
		dfs(x-1,y);
		return;
	}
	if(c[y][x]=='v'){
		dfs(x,y+1);
		return;
	}
	if(c[y][x]=='^'){
		dfs(x,y-1);
		return;
	}
	cout<<x<<" "<<y<<endl;
	return;
}
int main(){
   	while(cin>>h>>w,h+w){
		for(int i=0;i<h;i++){
			cin>>c[i];
			for(int j=0;j<w;j++){
				visited[i][j]=false;
			}
		}
		dfs(0,0);
	}
    return 0;
}

