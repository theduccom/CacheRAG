#include <cstdio>
#include <vector>

using namespace std;

int main(){
	int n;
	while(scanf("%d",&n) != EOF && n != 0){
		int max,id;
		int self;
		int p,d1,d2;
		max = -1;
		id = -1;
		for(int i=0;i<n;i++){
			scanf("%d %d %d",&p,&d1,&d2);
			self = d1+d2;
			if( max < self){
				max = self;
				id = p;
			}
		}
		printf("%d %d\n",id,max);
		
	}
	return 0;
}