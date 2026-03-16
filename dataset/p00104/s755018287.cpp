#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	int n,m,k,l;
	char a[105][105];
	while(1){
		scanf("%d %d",&n,&m);
		if( n==0 && m==0 ) break;
		k=0; l=0;
		for(int i=0 ; i<n ; i++ ){
			scanf("%s",&a[i]);	
		}
		int b[105][105]={0};
		while(1){
			if(a[k][l]=='.'){
				printf("%d %d\n",l,k);
				break;
			}
			if(b[k][l]==1){
				printf("LOOP\n");
				break;
			}
			if(a[k][l]=='>'){
				b[k][l]=1;
				l++;
				continue;
			}
			if(a[k][l]=='v'){
				b[k][l]=1;
				k++;
				continue;
			}
			if(a[k][l]=='<' ){
				b[k][l]=1;
				l--;
				continue;
			}
			if(a[k][l]=='^' ){
				b[k][l]=1;
				k--;
				continue;
			}
		}
	}
	return 0;
}