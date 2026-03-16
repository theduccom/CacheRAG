#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<map>
#include<set>
#include<queue>
#include<cstdio>
#include<climits>
#include<cmath>
#include<cstring>
#include<string>
#include<sstream>
#include<complex>

#define f first
#define s second
#define mp make_pair

#define REP(i,n) for(int i=0; i<(int)(n); i++)
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++)
#define ALL(c) (c).begin(), (c).end()

using namespace std;

typedef unsigned int uint;
typedef long long ll;
typedef complex<double> P;

#define MAX 1010

int main(){
  char buff[1000];
  while(fgets(buff,sizeof(buff),stdin)){
    int cnt = 1;
    for(char *p = buff; *p; p++){
      if(*p == '@'){
	p++;
	cnt = *p - '0'; 
      }else{
	while(cnt --> 0) putchar(*p);
	cnt = 1;
      }
    }
  }
  return 0;
}