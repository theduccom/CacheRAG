#include <iostream>
using namespace std;

int B[102][102];
bool maze = false;

void DFS(int Y, int X, int YG, int XG, int C)
{
  if(B[Y][X]!=C || C==0)
    return;

  if(Y==YG && X==XG)
    maze = true;

  B[Y][X] = 0;

  DFS(Y-1, X  , YG, XG, C);
  DFS(Y  , X+1, YG, XG, C);
  DFS(Y+1, X  , YG, XG, C);
  DFS(Y  , X-1, YG, XG, C);
}

int main()
{
  while(true){
    int w, h;
    cin >> w >> h;

    if(w==0 && h==0)
      break;

    int xs, ys, xg, yg, n;
    cin >> xs >> ys;
    cin >> xg >> yg;
    cin >> n;

    for(int y=0; y<=h; y++){
      for(int x=0; x<=w; x++){
	B[y][x] = 0;
      }
    }

    for(int i=0; i<n; i++){
      int c, d, x, y;
      cin >> c >> d >> x >> y;
      if(d==0){
	B[y  ][x  ] = c;
	B[y  ][x+1] = c;
	B[y  ][x+2] = c;
	B[y  ][x+3] = c;
	B[y+1][x  ] = c;
	B[y+1][x+1] = c;
	B[y+1][x+2] = c;
	B[y+1][x+3] = c;
      }
      else{
       	B[y  ][x  ] = c;
	B[y+1][x  ] = c;
	B[y+2][x  ] = c;
	B[y+3][x  ] = c;
	B[y  ][x+1] = c;
	B[y+1][x+1] = c;
	B[y+2][x+1] = c;
	B[y+3][x+1] = c;
      }
    }

    maze = false;

    DFS(ys, xs, yg, xg, B[ys][xs]);

    if(maze){
      cout << "OK" << endl;
    }
    else{
      cout << "NG" << endl;
    }
  }

  return 0;
}

