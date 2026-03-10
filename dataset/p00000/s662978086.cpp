#include <cstdio>

using namespace std;

#define repi(i,a,b) for(int i=int(a);i<int(b);i++)
#define rep(i,n) repi(i,0,n)

int main()
{
	repi(i,1,10)
		repi(j,1,10)
			printf("%dx%d=%d\n",i,j,i*j);
	
	return 0;
}