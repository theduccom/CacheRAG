#include<iostream>
#include<vector>

using namespace std;

void PutBlock(vector< vector<int> >&, int, int, int, int);
void CheckMaze1(vector< vector<int> >&, int&, int, int, int, int, int);
void CheckMaze2(vector< vector<int> >&, int&, int, int, int, int, int);

int main(){
  int i, w, h, n, xs, ys, xg, yg, c, d, x, y, color, ans;
  vector<int> _data;
  vector< vector<int> > data;

  while(1){
    cin >> w >> h;
    if(w == 0 && h == 0) break;

    for(i=0; i<w; ++i)
      _data.push_back(0);

    for(i=0; i<h; ++i)
      data.push_back(_data);

    cin >> ys >> xs;
    cin >> yg >> xg;
    --xs;
    --xg;
    --ys;
    --yg;

    cin >> n;

    for(i=0; i<n; ++i){
      cin >> c >> d >> y >> x;
      PutBlock(data, c, d, x-1, y-1);
    }

    color = data[xs][ys];

    ans = 0;
    CheckMaze1(data, ans, color, xs, ys, xg, yg);

    if(ans == 1)
      cout << "OK" << endl;
    else
      cout << "NG" << endl;

    _data.clear();
    data.clear();
  }

  return 0;
}

void PutBlock(vector< vector<int> >& data, int c, int d, int x, int y){
  int i, j;
  if(d == 0){
    for(i=x; i<x+2; ++i){
      for(j=y; j<y+4; ++j)
	data[i][j] = c;
    }
  }else{
    for(i=x; i<x+4; ++i){
      for(j=y; j<y+2; ++j)
	data[i][j] = c;
    }
  }
}

void CheckMaze1(vector< vector<int> >& data, int& ans, int color, int x, int y, int xg, int yg){
  data[x][y] = -1;
  if(x == xg && y == yg) ans = 1;

  CheckMaze2(data, ans, color, x-1, y, xg, yg);
  CheckMaze2(data, ans, color, x, y-1, xg, yg);
  CheckMaze2(data, ans, color, x+1, y, xg, yg);
  CheckMaze2(data, ans, color, x, y+1, xg, yg);
}

void CheckMaze2(vector< vector<int> >& data, int& ans, int color, int x, int y, int xg, int yg){
  if(x > -1 && x < data.size() && y > -1 && y < data[0].size() && data[x][y] == color)
    CheckMaze1(data, ans, color, x, y, xg, yg);
}