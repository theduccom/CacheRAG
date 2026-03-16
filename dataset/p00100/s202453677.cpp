#include <bits/stdc++.h>

using namespace std;

int main(){

  long long n, id, val, num, cnt;
  long long member[4000];
  int index[4000];

  while(cin >> n){

    if(!n) break;

    cnt = 0;
    memset(member, -1, sizeof(member));
    memset(index, -1, sizeof(index));

    for(int i = 0; i < n; ++i){

      cin >> id >> val >> num;

      if(member[id - 1] == -1){
        index[cnt] = id - 1; ++cnt;
        member[id - 1] += 1 + val * num;
      } else {
        member[id - 1] += val * num;
      }

    }

    bool flag = false;

    for(int i = 0; i < cnt; ++i){
      if(member[index[i]] >= 1000000){
        cout << index[i] + 1 << endl;
        flag = true;
      }
    }

    if(!flag) cout << "NA" << endl;

  }

}