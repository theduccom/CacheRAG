#include <iostream>
#include <queue>
#include <map>
#include <vector>
#include <utility>
using namespace std;

int main(void){
  const string goalState = "01234567";

  // ???????????????????????¶???????±????????????????
  queue<pair<int, string> > wait;
  map<string, int> result;
  wait.push(make_pair(0, goalState));
  result[goalState] = 0;
  
  while(!wait.empty()){
    int cost = wait.front().first;
    string state = wait.front().second;
    wait.pop();
    
    // ??£??\??¶???????±???????
    int zeropos;
    for(zeropos = 0; state[zeropos] != '0'; zeropos++);
    vector<string> nextlist;
    // ?????????????§??????§????????´???
    nextlist.push_back(state);
    swap(nextlist[0][zeropos], nextlist[0][(zeropos + 4) % 8]);
    // ???????§??????§????????´???
    if(zeropos % 4 != 0){
      nextlist.push_back(state);
      swap(nextlist[nextlist.size() - 1][zeropos], nextlist[nextlist.size() - 1][zeropos - 1]);
    }
    // ???????§??????§????????´???
    if((zeropos + 1) % 4 != 0){
      nextlist.push_back(state);
      swap(nextlist[nextlist.size() - 1][zeropos], nextlist[nextlist.size() - 1][zeropos + 1]);
    }
    
    for(int i = 0; i < (int)nextlist.size(); i++){
      if(result.find(nextlist[i]) == result.end()){
        result[nextlist[i]] = cost + 1;
        wait.push(make_pair(cost + 1, nextlist[i]));
      }
    }
  }

  // ?????¨?????????
  vector<string> in(8);
  while(cin >> in[0] >> in[1] >> in[2] >> in[3] >> in[4] >> in[5] >> in[6] >> in[7]){
    string state = in[0] + in[1] + in[2] + in[3] + in[4] + in[5] + in[6] + in[7];
    cout << result[state] << endl;
  }

  return 0;
}