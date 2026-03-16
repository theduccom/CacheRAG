#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
using namespace std;

int main(){
  int pos[] = {1, -1, 4, -4};
  queue<string> que;
  que.push("01234567");

  map<string, int> d;

  while(!que.empty()){
    string str = que.front();
    
    que.pop();
    int zero;
    for ( int i = 0; i < str.size(); i++ ) if ( str[i] == '0' ) zero = i;

    string str2;
    for ( int i = 0; i < 4; i++ ) {
      int next_z;
      next_z = zero + pos[i];
      if(next_z >= 0 && next_z <= 7 &&
	 !((zero == 3 && next_z == 4) || (zero == 4 && next_z == 3))){
	str2 = str;
	swap(str2[zero], str2[next_z]);

	if ( !d[str2] ) {
	  que.push(str2);
	  d[str2] = d[str] + 1;
	}
      }
    }
  }

  string num;
  char ch;
  while( cin >> ch ){
    num.clear();
    num += ch;
    for ( int i = 0; i < 7; i++ ) {
      cin >> ch;
      num += ch;
    }
    if ( num == "01234567" ) cout << 0 << endl;
    else cout << d[num] << endl;
  }
}