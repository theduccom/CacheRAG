#include <cstdio>
#include <map>
#include <string>
using namespace std;

int main(){
  map<string,int> B;
  int s;
  char b[2];
  string str;
  while(scanf("%d,%s",&s,b)>0){
    str=b;
    B[str]++;
  }
  printf("%d\n%d\n%d\n%d\n",B["A"],B["B"],B["AB"],B["O"]);
  return 0;
}