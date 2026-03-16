#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;

#define INF 1e9

vector<int> split_s2i(const std::string &str, char sep){
  vector<int> v;
  stringstream ss(str);
  string buffer;
  while(getline(ss, buffer, sep)){ v.push_back(stoi(buffer)); }
  return v;
}

int main(void){
  int n, m;
  cin >> n;
  cin >> m;

  vector<vector<int> > dp(n, vector<int>(n, INF));
  string input;
  for(int i = 0; i < m; i++){
    cin >> input;    
    vector<int> inp = split_s2i(input, ',');
    dp[inp[0] - 1][inp[1] - 1] = inp[2];
    dp[inp[1] - 1][inp[0] - 1] = inp[3];
  }
  for(int i = 0; i < n; i++)
    dp[i][i] = 0;

  // ???????????£???????????????
  for(int k = 0; k < n; k++)
    for(int i = 0; i < n; i++)
      for(int j = 0; j < n; j++)
        dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);  

  // ?????¨?????????
  cin >> input;
  vector<int> query = split_s2i(input, ',');
  int s = query[0] - 1;
  int g = query[1] - 1;
  int v = query[2];
  int p = query[3];
  int ans = v - (dp[s][g] + p + dp[g][s]);

  // ??????
  cout << ans << endl;

  return 0;
}