#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

  int h, w, v[100][100], x, y;
  string str[100];

  while(cin >> h >> w){
    if(h == 0) break;
    for(int i=0; i<h; i++){
      fill(&v[i][0], &v[i][w], 0);
    }

    getline(cin, str[0]);
    for(int i=0; i<h; i++){
      getline(cin, str[i]);
    }

    x = 0;
    y = 0;
    while(1){
      if(str[x][y] == '.'){
        cout << y << " " << x << endl;
        break;
      }
      else if(v[x][y] == 1){
        cout << "LOOP" << endl;
        break;
      }

      v[x][y] = 1;      

      if(str[x][y] == '^') x--;
      else if(str[x][y] == '>') y++;
      else if(str[x][y] == 'v') x++;
      else if(str[x][y] == '<') y--;
    }
  }

  return 0;

}