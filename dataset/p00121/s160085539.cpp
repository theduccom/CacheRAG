#include <iostream>
#include <string>
#include <queue>
#include <map>
using namespace std;

int prob[4] = {1,-1,4,-4};
queue<string> que;
map<string,int> memo;

void bfs () {
  que.push("01234567");
   
  while ( !que.empty() ) {
    string tmp;
    tmp = que.front(); que.pop();

    int zero;
    for ( int i = 0; i < 8; i++ ) {
      if ( tmp[i] == '0' ) zero = i;
    }

    int next;
    for ( int i = 0; i < 4; i++ ) {
      string tmp2 = tmp;     
      next = prob[i]+zero;
      if ( next >= 0 && next <= 7 && 
	!( ( zero == 3 && next == 4 ) || ( zero == 4 && next == 3 ) ) ) {

	swap(tmp2[zero],tmp2[next]);
	if ( !memo[tmp2] ) {
	  que.push(tmp2);
	  memo[tmp2] = memo[tmp] + 1;
	}
      }
    }

  }

}

int main() {
  char ch;
  bfs();
  while ( cin >> ch ) {
    string str = "";
    str += ch;
    for ( int i = 0; i < 7; i++ ) {
      cin >> ch;
      str += ch;
    }
    // cout << str << endl;
    if ( str == "01234567" ) cout << 0 << endl;
    else cout << memo[str] << endl;
  }
  
  return 0;
}