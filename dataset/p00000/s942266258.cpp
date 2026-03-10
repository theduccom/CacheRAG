#include <cstdio>
using namespace std;
#define REP1(i,n) for(int i=1;i<=n;++i)
int main(){
	REP1(i,9) REP1(j,9) printf("%dx%d=%d\n",i,j,i*j);
	return 0;
}