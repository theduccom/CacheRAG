//21:46~
//??????????????????????????£???
#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
#include <map>
#include <stdio.h>

using namespace std;

string data;
char goal[9] = "01234567";
queue<string> qu;
map<string,int> mp;
int d[4] = {-4,-1,1,4};
int pos;
int ans[1000];
char tmp;


void solve(){
  mp[goal] = 0;
  qu.push(goal);
  string pre_data;
  while(qu.size()){
    data = qu.front();
    pre_data = data;
    qu.pop();
    pos = data.find('0');
    for(int i = 0; i < 4; i++){
      if(pos + d[i] >= 0 && pos + d[i] < 8 && !(pos == 3 && d[i] == 1) && !(pos == 4 && d[i] == -1)){
        data = pre_data;
        swap(data[pos],data[pos+d[i]]);
        if(mp.find(data) == mp.end()){
          mp[data] = mp[pre_data] + 1;
          qu.push(data);
        }
      }
    }
  }
}

int main(){
  int n = 0;
  size_t c;
  solve();
  while(getline(cin, data)){
    while((c = data.find_first_of(" ")) != string::npos){
      data.erase(c,1);
    }
    ans[n++] = mp[data];
  }
  for(int i = 0; i < n; i++)
    printf("%d\n", ans[i]);
}