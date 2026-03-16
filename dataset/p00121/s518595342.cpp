#include<bits/stdc++.h>
using namespace std;
typedef long long int64;
typedef pair< int, int > Pi;
map< string, int > min_cost;

Pi getPos(string s){
  int white = s.find('0');
  return make_pair( white % 4, white / 4);
}
int getPos(Pi point){
  return point.second * 4 + point.first;
}


int bfs(string s){

  queue< string > que;
  const int dy[] = { 0, 1, 0, -1}, dx[] = { 1, 0, -1, 0};

  que.push(s);
  min_cost[s] = 0;

  while(!que.empty()){

    string p = que.front(); que.pop();
    Pi white = getPos(p);

    for(int i = 0; i < 4; i++){
      int ny = white.second + dy[i], nx = white.first + dx[i];
      string next = p;
      if(ny < 0 || ny >= 2 || nx < 0 || nx >= 4) continue;
      swap( next[getPos(make_pair(nx,ny))], next[getPos(white)]);
      if(min_cost.find(next) != min_cost.end() || min_cost[next] > min_cost[p] + 1) continue;
      min_cost[next] = min_cost[p] + 1;
      que.push(next);
    }

  }
 
  return 0;
}


int main(){
  bfs("01234567");
  string s;
  s.resize(8);
  while(cin >> s[0] >> s[1] >> s[2] >> s[3] >> s[4] >> s[5] >> s[6] >> s[7]){
    cout << min_cost[s] << endl;
  }
}