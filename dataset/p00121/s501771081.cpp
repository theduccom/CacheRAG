#include<bits/stdc++.h>
#define mp make_pair
using namespace std;
typedef pair<int, vector<int> > piv;
int d[4] = {-4, -1, 1, 4};

int main(int argc, char *argv[]){
  vector<int> a(8);
  for (int i = 0; i < 8; i++) {
    a[i] = i;
  }
  map<vector<int>, int> hash;
  hash[a] = 0;
  queue<piv> que;
  que.push(mp(0, a));
  while(!que.empty()){
    int len = que.front().first;
    vector<int> puzzle = que.front().second;
    que.pop();
    int pos;
    for (int i = 0; i < 8; i++) {
      if(puzzle[i] == 0){
        pos = i;
        break;
      }
    }
    for (int j = 0; j < 4; j++) {
      if(pos + d[j] < 0 || pos + d[j] >= 8)continue;
      if(abs((pos + d[j])%4 - pos%4) > 1)continue;
      swap(puzzle[pos], puzzle[pos + d[j]]);
      if(hash.find(puzzle) == hash.end()){
        hash[puzzle] = len + 1;
        que.push(mp(len + 1, puzzle));
      }
      swap(puzzle[pos], puzzle[pos + d[j]]);
    }
  }

  while(cin >> a[0]){
    for (int i = 1; i < 8; i++) {
      cin >> a[i];
    }
    std::cout << hash[a] << std::endl;
  }
  return 0;
}