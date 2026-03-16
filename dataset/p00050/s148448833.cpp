#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<cstdio>
#include<climits>
#include<cmath>
#include<cstring>
#include<string>

#define f first
#define s second
#define mp make_pair

#define REP(i,n) for(int i=0; i<(int)(n); i++)
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++)
#define ALL(c) (c).begin(), (c).end()

using namespace std;

typedef unsigned int uint;
typedef long long ll;

int main(){
  char buff[2000];
  while(fgets(buff,sizeof(buff),stdin)){
    int len = strlen(buff);
    REP(i,len-5)
      if(strncmp(buff+i, "apple", 5) == 0) strncpy(buff+i, "peach", 5);
      else if(strncmp(buff+i, "peach", 5) == 0) strncpy(buff+i, "apple", 5);
    printf("%s",buff);
  }
  return 0;
}