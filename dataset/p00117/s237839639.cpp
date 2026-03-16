#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
#include<complex>
using namespace std ;
typedef vector<int> vi ;
typedef vector<vi> vvi ;
typedef vector<string> vs ;
typedef pair<int, int> pii; 
typedef long long ll ;

#define loop(i,a,b) for(int i = a ; i < b ; i ++)
#define rep(i,a) loop(i,0,a)
#define all(a) (a).begin(),(a).end()
#define INF (1<<29)
int dist[30][30];
int main(void){
  int n,m;
  char dummy;
  cin >> n >> m;

  rep(i,n){
    rep(j,n){
      if(i==j)dist[i][j]=0;
      else dist[i][j]=INF;
    }
  }

  rep(i,m){
    int a,b,c,d;
    cin >> a >> dummy >> b >> dummy >> c >> dummy >> d;
    dist[a-1][b-1] = c;
    dist[b-1][a-1] = d;
  }

  rep(k,n){
    rep(i,n){
      rep(j,n){
	dist[i][j] = min(dist[i][j],dist[i][k]+dist[k][j]);
      }
    }
  }

  int x1 , x2 , y1 , y2;
  cin >> x1 >> dummy >> x2 >> dummy >> y1 >> dummy >> y2;
  cout<< (y1 - y2 - dist[x1-1][x2-1] - dist[x2-1][x1-1]) <<endl; 

}