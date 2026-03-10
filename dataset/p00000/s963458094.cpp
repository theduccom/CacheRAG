#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<vector>
#include<queue>
#include<stack>
#include<cmath>
#include<map>
#include<list>
#include<set>
using namespace std;

int main(){
  for(int i=1;i<=9;i++){
    for(int j=1;j<=9;j++){
      cout << i << 'x' << j << '=' << i*j << endl;
    }
  }
  return 0;
}


