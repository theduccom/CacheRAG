#include <iostream>
#include <string>

using namespace std;

string s[8];

void bomb(int y, int x){// 4 1

  for( int i = 1 ; i <= 3 ; i++ ){ // x座標右
    if( x + i > 7 )break;
    else if( s[y][x + i] == '1' ){
      s[y][x + 1] = '0';
      bomb( y , x + i );
    }
  }
  for( int i = 1 ; i <= 3 ; i++ ){ // x座標左
    if( x - i < 0 )break;
    else if( s[y][x - i] == '1' ){
      s[y][x - i] = '0';
      bomb( y , x - i );
    }
  }
  for( int i = 1 ; i <= 3 ; i++ ){ // y座標下
    if( y + i > 7 )break;
    else if( s[y + i][x] == '1' ){
      s[y + i][x] = '0';
      bomb( y + i , x );
    }
  }
  for( int i = 1 ; i <= 3 ; i++ ){ // y座標上
    if( y - i < 0 )break;
    else if( s[y - i][x] == '1' ){
      s[y - i][x] = '0';
      bomb( y - i , x );
    }
  }


}

int main(void){

  int cnt = 1;
  int n;
  cin >> n;
  while(n--){

    for( int i = 0 ; i < 8 ; i++ ){
      cin >> s[i];
    }
    int x,y;
    cin >> x >> y;
    s[--y][--x] = '0';
    bomb( y , x ); 
    cout << "Data " << cnt++ << ":" << endl;
    for( int i = 0 ; i < 8 ; i++ ){
      cout << s[i] << endl;
    }
  }
  return 0;
}