#include <cstdio>

#define reep(i,n,m) for(int i=(n);i<(m);i++)
#define rep(i,n) reep(i,0,n)

using namespace std;

int main(){
	reep(y,1,10){
		reep(x,1,10){
			printf("%dx%d=%d\n",y,x,y*x);
		}
	}
	return 0;
}