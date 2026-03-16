#include <cstdio>
using namespace std;
/*(^(^(^(^(^o^)^)^)^)^) &#9602;&#9605;&#9607;&#9608;&#9619;&#9618;&#9617;('ω')&#9617;&#9618;&#9619;&#9608;&#9607;&#9605;&#9602; */
int main(){
	int n,m=0;
	while(1){
		scanf("%d",&n);
		if(n==0) break;
		while(n!=0){
			n /= 5;
            m+=n;
		}
		printf("%d\n",m);
		m=0;
	}
	return 0;
}