#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>

using namespace std;

int main(){
  vector<int> c(5);
  while(~scanf("%d", &c[0])){
    int p = 0; int tc = 0;
    for(int i = 1; i < 5; i++) scanf(",%d", &c[i]);
    sort(c.begin(), c.end());
    for(int i = 0; i < 5; i++){
      if(i != 0 && c[i] == c[i-1])p++;
      if(i != 1 && c[i] == c[i-2])tc++;
    }
    if(p == 1) puts("one pair");
    else if(tc == 1 && p == 3)puts("full house");
    else if(tc && p == 2) puts("three card");
    else if(p == 2)  puts("two pair"); 
    else if(p == 3) puts("four card");
    else if(c[4] - c[0] == 4 || (c[0] == 1 && c[1] == 10 && c[4] == 13)) puts("straight");
    else puts("null");
  }
  return 0;
}