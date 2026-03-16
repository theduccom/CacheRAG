#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

#define MAX 1000100

bool p[MAX];

void eratos(){
  memset(p, true, sizeof(p));
  p[0] = p[1] = false;
  for(int i = 0 ; i * i < MAX ; i++){
    if(p[i]){
      for(int j = 2*i ; j < MAX ; j += i){
	p[j] = false;
      }
    }
  }
}

int main(){
  eratos();
  int n, x;
  while(cin >> n >> x){
    if(n == 0 && x == 0) break;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++){
      cin >> v[i];
    }
    
    bool budget[MAX];
    memset(budget, false, sizeof(budget));
    budget[0] = true;
    
    for(int i = 0 ; i < x ; i++){
      if(budget[i]){
	for(int j = 0 ; j < n ; j++){
	  if(i + v[j] <= x) budget[i+v[j]] = true;
	}
      }
    }
    
    bool flag = true;
    
    for(int i = x ; i >= 0 ; i--){
      if(budget[i] && p[i]){
	flag = false;
	cout << i << endl;
	break;
      }
    }
    if(flag) cout << "NA" << endl;
  }
  return 0;
}

  
    