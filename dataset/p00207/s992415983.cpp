#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define RFOR(i,a,b) for(int i=(b) - 1;i>=(a);i--)
#define REP(i,n) for(int i=0;i<(n);i++)
#define RREP(i,n) for(int i=n-1;i>=0;i--)

#define PB push_back
#define INF INT_MAX/3
#define ALL(a) (a).begin(),(a).end()
#define CLR(a) memset(a,0,sizeof(a))

typedef long long int ll;

using namespace std;

bool u[101][101];
int board[101][101];
int gc;
int h,w,n;
int xs,ys,xg,yg;
int dx[] = {-1,0,0,1};
int dy[] = {0,1,-1,0};
bool saiki(int x,int y){
    bool ret = false;
    if(x==xg&&y==yg) return true;
    REP(i,4){
	int nx = x + dx[i];
	int ny = y + dy[i];
	if(1<=nx&&nx<=w&&1<=ny&&ny<=h&&board[ny][nx] == gc&&!u[ny][nx]){
	    u[ny][nx] = true;
	    ret = ret || saiki(nx,ny);
	}
    }
    return ret;
}

int main(){
    while(true){
	memset(board,0,sizeof(board));
	memset(u,false,sizeof(u));
	cin >> w >> h;
	if(w == 0 && h == 0) break;
	cin >> xs >> ys >> xg >> yg;
	cin >> n;
	REP(i,n){
	    int c,d,x,y;
	    cin >> c >> d >> x >> y;
	    if(d == 1){
		REP(i,2){
		    REP(j,4){
			board[y+j][x+i] = c;
		    }
		}
	    }else{
		REP(i,4){
		    REP(j,2){
			board[y+j][x+i] = c;
		    }
		}
	    }
	}
	gc = board[ys][xs];
	if(gc != board[yg][xg]) cout << "NG" << endl;
	else{
	    if(saiki(xs,ys)){
		cout << "OK" << endl;
	    }else cout << "NG" << endl;
	}


    }
    return 0;
}