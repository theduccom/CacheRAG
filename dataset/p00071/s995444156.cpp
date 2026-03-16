#include <iostream>
#include <string>
using namespace std;

string str[8];

void bfs( int y,int x){
  // cout << "x" << " " << x+1 << " " << "y" << " " << y+1 << endl;
  if( str[y][x] == '0' ) return;
  str[y][x] = '0';

  if ( y+1 <= 7 )bfs( y+1 , x );  
  if ( x+1 <= 7 )bfs( y , x+1 );
  if ( y-1 >= 0 )bfs( y-1 , x );  
  if ( x-1 >= 0 )bfs(  y, x-1 ); 

  if ( y+2 <= 7 )bfs( y+2 , x );  
  if ( x+2 <= 7 )bfs( y , x+2 );  
  if ( y-2 >= 0 )bfs( y-2 , x );  
  if ( x-2 >= 0 )bfs(  y, x-2 ); 

  if ( y+3 <= 7 )bfs( y+3 , x ); 
  if ( x+3 <= 7 )bfs( y , x+3 );  
  if ( y-3 >= 0 )bfs( y-3 , x );
  if ( x-3 >= 0 )bfs(  y, x-3 ); 

  return ;

}


int main(){
  int n; 
  int cnt = 0;
  cin >> n;
  while ( n > 0 ) {
   
    n--;
    for( int i = 0; i < 8; i++ ) cin >> str[i];
    // for( int i = 0; i < 8; i++ ) cout << str[i] << endl;
    
    int sx,sy;
    cin >> sx >> sy;
    sx--;
    sy--;
    bfs(sy,sx);
    cnt++;
    cout << "Data" << " " << cnt << ":" << endl;
    for( int i = 0; i < 8; i++ ) cout << str[i] << endl;
   
  } 
  return 0;
}