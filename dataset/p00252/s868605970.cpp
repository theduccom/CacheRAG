#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>

#include <functional>
#include <cassert>

typedef long long ll;
using namespace std;

#define debug(x) cerr << #x << " = " << x << endl;


#define mod 1000000007 //1e9+7(prime number)
#define INF 1000000000 //1e9
#define LLINF 2000000000000000000LL //2e18
#define SIZE 10000


int main(){
  int n = 3;
  int in;
  int ans = 0;

  for(int i=0;i<n;i++){
    scanf("%d",&in);
    ans = ans*2+in;
  }

  if(ans == 1 || ans == 6)
    puts("Open");
  else
    puts("Close");
  
  return 0;
}