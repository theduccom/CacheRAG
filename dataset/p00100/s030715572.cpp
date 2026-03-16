#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

#define MAX_N 4001

int main(){
  int n;
  unsigned long long ID, price, figure, man[MAX_N], id[MAX_N];

  while(cin >> n, n){
    memset(man, 0, sizeof(man));
    memset(id, 0, sizeof(id));

    for(int i = 1 ; i <= n ; i++){
      cin >> ID >> price >> figure;
      man[ID] += price * figure;
      id[i] = ID;
    }

    bool flag[MAX_N], f = false;
    memset(flag, false, sizeof(flag));
    
    for(int i = 1 ; i <= n ; i++){
      if(man[id[i]] >= 1000000 && flag[id[i]] == false){
	cout << id[i] << endl;
	flag[id[i]] = true;
	f = true;
      }
    }
    if(f == false) cout << "NA" << endl;
  }
  return 0;
}