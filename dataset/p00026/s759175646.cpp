#include <iostream>

using namespace std;

int map[10][10]= {};
const int dx[] = {1, 0, -1, 0, 1, 1, -1, -1, 2, -2, 0, 0}, dy[] = {0, 1, 0, -1, 1, -1, 1, -1, 0, 0, 2, -2};
  
void drop_ink(int x, int y, int size)
{
  map[x][y]++;
  for(int i = 0; i < 4 * size; i++)
    if(x+dx[i] < 10 && x+dx[i] >= 0 && y+dy[i] < 10 && y+dy[i] >= 0)
      map[x+dx[i]][y+dy[i]]++;
}

int main()
{
  int x, y, s, ans1, ans2 = 0;
  char c;
  while(cin >> x >> c >> y >> c >> s){
    drop_ink(x, y, s);
    ans1 = 0;
    for(int i = 0; i < 10; i++){
      for(int j = 0; j < 10; j++){
	if(map[i][j] == 0)
	  ans1++;
	ans2 = (map[i][j] > ans2) ? map[i][j] : ans2;        
      }
    }
  }
  cout << ans1 << endl << ans2 << endl;
}