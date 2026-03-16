#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

string a[8];
void dfs(int y, int x) {
  if( y < 0 || 8 <= y || x < 0 || 8 <= x || a[y][x] == '0')return;
  a[y][x] = '0';
  for(int i = -3; i < 4; i++)
    for(int j = -3; j < 4; j++)
      if(i == 0 || j == 0)dfs (y + i, x + j);
}
int main(){
  string s; int n, x, y, i, j = 1;
  cin >> n;
  while(n--) {
    for( i = 0; i < 8; i++) cin >> a[i];
    cin >> x; cin >> y;
    dfs(y - 1, x - 1);
    printf("Data %d:\n", j++);
    for(i = 0; i < 8; i++)
      cout << a[i] << endl;
  }
  return 0;
}