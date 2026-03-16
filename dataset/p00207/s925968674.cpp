#include <iostream>
using namespace std;
int w,h, n;
int xs,ys, xg,yg;
int c,d,x,y;
char board[100][100];

bool rec(int y, int x, char c){
  if( y<0 || x<0 )
    return false;
  if( y>=h || x>=w )
    return false;

  if( board[y][x] !=c )
    return false;

  if( y==yg && x==xg )
    return true;
  board[y][x] = 9;

  int dx[]={0,0,1,-1}, dy[]={1,-1,0,0};
  for( int z=0;z<4;z++ ){
    if( rec(y+dy[z], x+dx[z], c) )
      return true;
  }

  return false;
}
int main(){
  while(cin>>w>>h,w){
    for( int i=0;i<h;i++ )
      for( int j=0;j<w;j++ )
	board[i][j] = 0;

    cin >> xs >> ys;
    cin >> xg >> yg;
    xs--;ys--;
    xg--;yg--;

    cin >> n;
    while(n--){
      cin >> c >> d >> x >> y;
      x--; y--;
      int li=d?4:2; // d==0 => yoko
      int lj=d?2:4;

      for( int i=0;i<li;i++ )
	for( int j=0;j<lj;j++ )
	  board[y+i][x+j] = c;
    }
    if( rec(ys, xs, board[ys][xs]) )
      cout << "OK" << endl;
    else
      cout << "NG" << endl;
    /*
    for( int i=0;i<h;i++ ){
      for( int j=0;j<w;j++ )
	cout << (int)board[i][j];
      cout << endl;
    }
    */
  }

  return 0;
}