#include <iostream>
using namespace std;

int a[10][10];

void drop( int x, int y ){
  if( x<0 || x>=10 ) return;
  if( y<0 || y>=10 ) return;
  a[y][x]++;
}

int main(){
  int x,y,s;
  char c;

  for( int i=0;i<10;i++ )
    for( int j=0;j<10;j++ )
      a[i][j] = 0;

  while( cin>>x>>c>>y>>c>>s ){
    //    cout << x << " "<< y << " "<<s << endl;

    if( s>=1 ){
      drop(x,y);
      drop(x+1,y); drop(x-1,y);
      drop(x,y+1); drop(x,y-1);
    }
    if( s>=2 ){
      drop(x+1,y+1); drop(x+1,y-1);
      drop(x-1,y+1); drop(x-1,y-1);
    }
    if( s>=3 ){
      drop(x,y+2); drop(x,y-2);
      drop(x+2,y); drop(x-2,y);
    }
  }
  int zero=0;
  int mx=0;
  for( int i=0;i<10;i++ ){
    for( int j=0;j<10;j++ ){
      if( a[i][j]==0 ) zero++;
      if( a[i][j]>mx ) mx=a[i][j];
    }
  }
  cout << zero << endl;
  cout << mx << endl;

  return 0;
}