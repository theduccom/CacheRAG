#include <iostream>
#include <queue>
#include <string>
using namespace std;
struct po{
  int x,y;
};
int mp[10][10];
string str[10];
queue <po> Q;

void bfs(int x,int y) {
  int dx[] = {0,0,1,-1};
  int dy[] = {-1,1,0,0};

  po t;
  t.x =x;
  t.y = y;
  Q.push(t);

  while(!Q.empty()){
    t = Q.front();
    Q.pop();

    str[t.y][t.x] = '0';
    
    for(int i=0;i<4;i++){
      int nx = t.x;
      int ny = t.y;
      for(int j=0;j<3;j++){
	nx += dx[i];
	ny += dy[i];
	if(nx < 0 || nx >= 8 || ny < 0 || ny >= 8) continue;
	po a;
	a.x = nx;
	a.y = ny;
	if(str[ny][nx] == '1') Q.push(a);
      }
    }
  }
}

int main() {

  int n;
  cin >> n;
  for(int i=0;i<n;i++){
    
    for(int j=0;j<8;j++){
      cin >> str[j];
      if(str[j].size() == 0)j--;
    }

    int sx,sy;
    cin >> sx >>sy;
    bfs(sx-1,sy-1);
    
    cout << "Data "<<i+1<<":"<<endl;
    for(int j=0;j<8;j++)cout << str[j] << endl;

  }

  return 0;
}