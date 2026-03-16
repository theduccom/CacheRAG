#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main(void){
 
  int p[14][14] = {0};
  int x,y,size;
  char ten,tenten;
 back:;
  while( cin >> x >> ten >> y >> tenten >> size ){
    x += 2;
    y += 2;
    switch(size){
    case 3:
      p[x-2][y]++;
      p[x+2][y]++;
      p[x][y-2]++;
      p[x][y+2]++;
    case 2:
      p[x+1][y+1]++;
      p[x-1][y-1]++;
      p[x+1][y-1]++;
      p[x-1][y+1]++;
    case 1:
      p[x][y+1]++;
      p[x][y-1]++;
      p[x-1][y]++;
      p[x+1][y]++;
      p[x][y]++;
    }
  }
   
  int cnt = 0;
  int m = 0;
  for( int i = 2 ; i < 12 ; i++ ){
    for( int j = 2 ; j < 12 ; j++ ){
      if( p[i][j] == 0 ) cnt++;
      m = max( m , p[i][j] );
      //  cout << " " << p[i][j] << " ";
    }
    //cout << endl;
  }
  cout << cnt << endl << m << endl;
  return 0;
}