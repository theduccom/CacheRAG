#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	int j,x[8];
	char y[10];
		scanf("%s",y);
		for(j=0;j<8;j++){
			x[j]=y[j]-'0';
		}
		sort(x,x+8);
		printf("%d\n",x[7]*9999999+x[6]*999990+x[5]*99900+x[4]*9000-x[3]*9000-x[2]*99900-x[1]*999990-x[0]*9999999);
	}
	return 0;
}