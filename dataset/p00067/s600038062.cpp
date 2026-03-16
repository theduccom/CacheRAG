#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back

bool visited[12][12];

void dfs(int y,int x,char data[12][12]){
	visited[y][x]=true;

	int d[]={-1,0,1,0,-1};
	rep(i,4){
		if( y+d[i]>=0 && x+d[i+1]>=0 && 12>y+d[i] && 12>x+d[i+1] )
			if( data[y+d[i]][x+d[i+1]]=='1' && visited[y+d[i]][x+d[i+1]]==false )
				dfs(y+d[i],x+d[i+1],data);
	}
}


int main(){
	char data[12][12];

	while(cin>>data[0]){
		int sum=0;
		for(int i=1;i<12;i++){
			cin>>data[i];
		}

		rep(i,12)rep(j,12)visited[i][j]=false;

		rep(i,12){
			rep(j,12){
				if( visited[i][j]==false && data[i][j]=='1' ){
					dfs(i,j,data);
					sum++;
				}
			}
		}
		cout<<sum<<endl;
	}
}