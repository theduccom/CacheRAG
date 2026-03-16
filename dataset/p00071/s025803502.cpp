#include<bits/stdc++.h>
using namespace std;

void brake(int x,int y);
string ban[8];
int dx[] = {0,0,0,1,2,3,0,0,0,-1,-2,-3};
int dy[] = {-1,-2,-3,0,0,0,1,2,3,0,0,0};

int main(){
  int n;
  int cou=1;
  cin >> n;
  while(n--){
    /*
    string blank;
    cin >> blank;
    cout << blank << "A";
    */
    for(int i=0;i<8;i++){
      cin >> ban[i];
    }
    int x,y; cin >> x >> y;
    brake(x-1,y-1);
    cout << "Data " << cou << ":" << endl;
    for(int i=0;i<8;i++){
      cout << ban[i] << endl;
    }
    cou++;
  }
}

void brake(int x, int y){
  ban[y][x] = '0';
  for(int i=0;i<12;i++){
    int nx = x + dx[i];
    int ny = y + dy[i];
    if(nx >= 0 && nx < 8 && ny >= 0 && ny < 8){
      if(ban[ny][nx] == '1') brake(nx,ny);
    }
  }
  return;
}