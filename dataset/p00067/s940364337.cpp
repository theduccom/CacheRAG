#include <iostream>
#include <string>
#include <vector>
using namespace std;

string map[12];

void bfs(int i,int j){
  if( map[i][j] == '0' ) return;
  if( map[i][j] == '1' ){
    map[i][j] = '0';
    if( i-1 >= 0 ) bfs(i-1,j);
    if( i+1 <= 11 ) bfs(i+1,j);
    if( j+1 <= 11 ) bfs(i,j+1);
    if( j-1 >= 0 ) bfs(i,j-1);
  }
}

int main(){
  string str;

  while( cin >> str ){
    map[0] = str;
    for( int i = 1; i < 12; i++ ) cin >> map[i];
    int cnt = 0;
    for( int i = 0; i < 12; i++ ){
      for( int j = 0; j < 12; j++ ){
	if( map[i][j] == '1' ){
	  cnt++;
	  bfs(i,j);
	}
      }
    }
    cout << cnt << endl;
    // for( int i = 0; i < 12; i++ ) cout << map[i] << endl;
  }
  return 0;
}