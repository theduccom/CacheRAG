#include <iostream>
#include <map>
#include <string>
#include <queue>
using namespace std;

queue<string> que;
map<string, int> used;

int pos[] = {-1,1,4,-4};

void bfs() {
  que.push("01234567");
  while( !que.empty() ) {
    string str = que.front(); que.pop();
    int zero;
    for ( int i = 0; i < str.size(); i++ ) if ( str[i] == '0' ) zero = i;
    
    for ( int i = 0; i < 4; i++ ) {
      string str2 = str;
      int next;
      next = zero + pos[i];
      if ( next >= 0 && next <= 7 &&
	   !( ( zero == 3 && next == 4 ) || ( zero == 4 && next == 3 ) ) ){
	swap ( str2[zero], str2[next] );
	if ( !used[str2] ) {
	used[str2] = used[str] + 1;
	que.push(str2);
	}
      }
    }
  }
}

int main() {
  char ch;
  string num;
  bfs();
  while ( cin >> ch ) {
    num.clear();
    num += ch;
    for ( int i = 0; i < 7; i++ ) {
      cin >> ch;
      num += ch;
    }
    //cout << num << endl;
    if ( num == "01234567" ) cout << 0 << endl;
    else cout << used[num] << endl;
  }

  return 0;
}