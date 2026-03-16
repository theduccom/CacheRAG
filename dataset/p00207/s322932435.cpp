#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define Rep(i,n) for(int i=0;i<(n);i++)
#define Rrep(i, m, n) for(int i=(m);i<(n);i++)
#define All(v) v.begin(),v.end()
#define Uniq(v) v.erase(unique(All(v)),v.end())
typedef pair<int, int> Pii;
typedef pair<int, Pii> Pip;
typedef pair<string, int> Psi;
typedef vector<int> Vi;
const int INF = (1<<30);
const int dx[]={1,0,-1,0}, dy[]={0,-1,0,1};

int space[100][100];
bool flag[100][100];
int w, h;
int sx, sy;
int gx, gy;
int n;

bool bfs() {
  queue<Pii> q;
  int start_color = space[sy][sx];
  q.push( Pii(sy, sx) );

  while( !q.empty() ) {
    Pii p = q.front(); q.pop();
    int x = p.sc, y = p.fr;
    flag[y][x] = true;
    if( x == gx && y == gy ) return true;
    Rep(i, 4) {
      int nx = x+dx[i], ny = y+dy[i];
      if( nx >= 0 && ny >= 0 && nx < w && ny < h && !flag[ny][nx] && space[ny][nx] == start_color ) {
	q.push( Pii(ny, nx) );
      }
    }
  }

  return false; 
}

int main()
{
  while( cin >> w >> h, w+h ) {
    fill_n(*space, 100*100, 0);
    fill_n(*flag, 100*100, false);
    cin >> sx >> sy; sx--; sy--;
    cin >> gx >> gy; gx--; gy--;
    cin >> n;

    Rep(i, n) {
      int c, d, x, y;
      cin >> c >> d >> x >> y;
      x--; y--;
      if( d == 0 ) {
	Rep(j, 2) {
	  Rep(k, 4) {
	    space[y+j][x+k] = c;
	  }
	}
      } else {
	Rep(j, 4) {
	  Rep(k, 2) {
	    space[y+j][x+k] = c;
	  }
	}
      }
    }

    if( bfs() ) cout << "OK" << endl;
    else cout << "NG" << endl;
  }

}