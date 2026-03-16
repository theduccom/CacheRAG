#include <vector>
#include <map>
#include <algorithm>
#include <stdio.h>

#include<iostream>

using namespace std;

typedef long long ll;

struct data{
  int id;
  ll sum;
};

int main(void)
{

  int n;
  ll num, cost;
  data d[10000];

  while(cin >> n && n){
    int flag = true;
    for(int i = 0; i < n; i++){
      cin >> d[i].id >> cost >> num;
      d[i].sum = cost*num;
    }

    for(int i = 0; i < n-1; i++){
      for(int j = i+1; j < n; j++){
        if(d[i].id == d[j].id && d[j].id){
          d[i].sum += d[j].sum;
          d[j].id = false;
        }
      }
    }

    for(int i = 0; i < n; i++){
      if(d[i].sum >= 1000000 && d[i].id){
        cout << d[i].id << endl;
        flag = false;
      }
    }
    if(flag){
        cout << "NA" << endl;
    }
  }

  return 0;
}