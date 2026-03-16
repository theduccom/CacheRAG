#include<map>
#include<set>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<string>
#include<vector>
#include<complex>
#include<cstdlib>
#include<cstring>
#include<numeric>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<functional>

#define mp       make_pair
#define pb       push_back
#define all(x)   (x).begin(),(x).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define REP(i,b,n) for(int i=b;i<n;i++)

using namespace std;

typedef    long long          ll;
typedef    unsigned long long ull;
typedef    vector<bool>       vb;
typedef    vector<int>        vi;
typedef    vector<vb>         vvb;
typedef    vector<vi>         vvi;
typedef    pair<int,int>      pii;

const int INF=1<<29;
const double EPS=1e-9;

const int dx[]={1,0,-1,0},dy[]={0,-1,0,1};

int main(){
	int n;
	int board[9][9];
	char board1[9][9];
	cin>>n;
	int N =n;
	while(n--){
		string str;
		for(int j =1;j <=8;j++){
			cin>>board1[j];
		}
		for(int i=1;i <=8;i++){
			for(int j=1;j <=8;j++){
				board[i][j]=board1[i][j-1]-'0';
			}
		}
		queue<pii> bom;
		int x,y;
		scanf("%d %d",&x,&y);
		bom.push(pii(y,x));
		while(!bom.empty()){
			int nx = bom.front().second;
			int ny = bom.front().first;
			bom.pop();
			board[ny][nx]=0;
			//右方向
			for(int i = 1;i <= 3;i++){
				if(nx+i<=8&&board[ny][nx+i]==1){
					bom.push(pii(ny,nx+i));
					board[ny][nx+i]=0;
				}
			}
			//上方向
			for(int i = 1;i <=3;i++){
				if(ny-i>=1&&board[ny-i][nx]==1){
					bom.push(pii(ny-i,nx));
					board[ny-i][nx]=0;
				}
			}
			//下方向
			for(int i = 1;i <=3;i++){
				if(ny+i<=8&&board[ny+i][nx]==1){
					bom.push(pii(ny+i,nx));
					board[ny+i][nx]=0;
				}
			}
			//左方向
			for(int i =1;i <=3;i++){
				if(nx-i>=1&&board[ny][nx-i]==1){
					bom.push(pii(ny,nx-i));
					board[ny][nx-i]=0;
				}
			}
		}
		printf("Data %d:\n",N-n);
		for(int i=1;i <=8;i++){
			for(int j= 1;j <=8;j++){
				cout <<board[i][j];
			}
			cout <<endl;
		}
	}
	return 0;
}