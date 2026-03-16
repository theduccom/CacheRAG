#include <iostream>
#include <string>

using namespace std;

int str[10];

void getBinStr(int target) {
  int nowMod;
  int nowDiv = target;
  int i;

  for(i = 0; i < 10 && nowDiv != 0; i++) {
    nowMod = nowDiv % 2;
    nowDiv /= 2;
    str[i] = nowMod;
  }
  for(int j = i; j < 10; j++) {
    str[j] = 0;
  }
}


int main(void) {
  int target;
  const static int weight[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
  while(cin >> target) {
    getBinStr(target);
    bool isFirst = true;
    for(int i = 0; i < 10; i++) {
      if(str[i] == 1) {
        if(isFirst) {
          cout << weight[i];
          isFirst = false;
        }
        else {
          cout << " " << weight[i];
        }
      }
    }
    cout << endl;
  }
  return 0;
}