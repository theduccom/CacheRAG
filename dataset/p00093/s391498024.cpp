#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <string>
#include <map>
#include <functional>
#include <cmath>
#include <cstdio>
using namespace std;

int main(){
  int a, b;
  vector<int> ans;
  vector<int> count;
  while(cin >> a >> b, a, b){
    int cnt = 0;
    for(int i = a; i <= b; i++){
      if(i % 4 == 0){
        if(i % 100 != 0 || i % 400 == 0){
          ans.push_back(i);
          cnt++;
        }
      }
    }
    count.push_back(cnt);
  }
  int l = 0, k = 0;
  for(int i = 0; i < ans.size(); i++){
    if(count[k] == 0){
      cout << "NA" << endl;
      i--;
    }else{
      cout << ans[i] << endl;
      l++;
    }
    if(l == count[k] && i != ans.size() - 1){
      cout << endl;
      k++;
      l = 0;
    }
  }
}