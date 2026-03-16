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
#define DBL(x) ((x)*(x))
#define EPS 1e-10

using namespace std;

typedef unsigned int uint;
typedef long long ll;
typedef complex<double> P;

int main(){
  int a,b;
  int c = 0;
  while(scanf("%d%d",&a,&b), a+b){
    bool flag = false;
    if(c++ != 0) puts("");
    do{
      if( (a%4 == 0 && a%100 != 0) || (a%400 == 0) ){
	flag = true;
	printf("%d\n",a);
      }
    }while(++a <= b);
    if(!flag) puts("NA");
  }
}