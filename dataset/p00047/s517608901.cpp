#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
  char a,b;
  int x[] = {1,0,0};
  while(scanf("%c,%c\n", &a,&b)!=EOF) {
    swap(x[a-'A'], x[b-'A']);
  }
  for(int i=0;i<(int)3;++i){
    if (x[i]){
      cout << (char)('A' + i) << endl;
}
} 
}
