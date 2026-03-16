#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;

int main(){

  string str[1000];
  int a,b;

  while(cin >> a >> b, a, b){

    for(int i=0;i<a;i++) cin >> str[i];

    int x = 0,y = 0,count = 0,t = 0;

    while(1){
      if(count == 1000000){
	t = 1;
	break;
      }

      if(str[x][y] == '>') y++;
      else if(str[x][y] == '<') y--;
      else if(str[x][y] == '^') x--;
      else if(str[x][y] == 'v') x++;
      else break;
      count++;
    }

    if(t == 1) cout << "LOOP" << endl;
    else cout << y << " " << x << endl;

  }
}