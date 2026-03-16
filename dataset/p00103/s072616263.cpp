#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <string>
#include <map>
#include <functional>
#include <cmath>
#include <cstdio>
#include <cstring>
using namespace std;

#define PI 4*atan(1)

int main(){
  int n;
  cin >> n;
  for(int i = 0; i < n; i++){
    bool base[3] = {false};
    int point = 0, out = 0;
    while(1){
      char s[8];
      cin >> s;
      if(strcmp(s, "HIT") == 0){
        if(base[2] == true){
          point += 1;
          base[2] = false;
        }
        if(base[1] == true){
          base[1] = false;
          base[2] = true;
        }
        if(base[0] == true){
          base[0] = false;
          base[1] = true;
        }
        base[0] = true;
      }
      if(strcmp(s, "OUT") == 0){
        out++;
        if(out == 3)break;
      }
      if(strcmp(s, "HOMERUN") == 0){
        for(int j = 0; j < 3; j++){
          if(base[j] == true){
            // cout << "base[" << i << "]" << endl;
            base[j] = false;
            point++;

          }
        }
        point++;
          // cout << "point:" << point << endl;
      }
    }
    cout << point << endl;
  }
}