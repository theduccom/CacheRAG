#include <cstdio>
#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
  int n;
  string input;

  scanf("%d", &n);
  for (int i = 0; i < n; i++){
    queue<bool> base;
    int out = 0, pt = 0;
    while (out < 3){
      cin >> input;
      if (input == "HIT"){
        base.push(true);
        if (base.size() == 4){
          pt += base.front();
          base.pop();
        }
      }
      else if (input == "HOMERUN"){
        pt += base.size() + 1;
        while (!base.empty()){
          base.pop();
        }
      }
      else if (input == "OUT"){
        out++;
      }
    }
    printf("%d\n", pt);
  }

  return (0);
}