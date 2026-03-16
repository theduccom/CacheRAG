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

#define PI 4*atan(1)

int main(){
  long long int n;
  while(cin >> n, n){
    map<long long int,long long int> e;
    vector<long long int> num;
    int cntnum[4000] = {0};
    for(int i = 1; i <= 4000; i++){
      e[i] = 0;
    }
    for(int i = 0; i < n; i++){
      long long int tmp[3];
      cin >> tmp[0] >> tmp[1] >> tmp[2];
      e[tmp[0]] += tmp[1] * tmp[2];
      if(cntnum[tmp[0]] == 0){
        num.push_back(tmp[0]);
        cntnum[tmp[0]]++;
      }
    }
    long long int cnt = 0;
    for(int i = 0; i < num.size(); i++){
      if(e[num[i]] >= 1000000){
        cout << num[i] << endl;
        cnt++;
      }
    }
    if(cnt == 0){
      cout << "NA" << endl;
    }
  }
}