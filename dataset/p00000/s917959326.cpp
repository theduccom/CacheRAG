#include<iostream>
#include<iomanip>
#include<sstream>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<string>
#include<numeric>
#include<set>
using namespace std;

int main(){

  for(int i = 1; i <= 9; i++){
    for(int j = 1; j <= 9; j++)
      cout << i << "x" << j << "=" << i*j << endl;
  }
  
  return 0;
}
