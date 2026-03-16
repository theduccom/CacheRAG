#include <stdio.h>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int main(){
	int n,max_id,max_value,id,a,b;

	while(true){
		scanf("%d",&n);
		if(n == 0)break;

		max_value = -1;

		for(int i = 0; i < n; i++){
			scanf("%d %d %d",&id,&a,&b);
			if(max_value < a + b){
				max_value = a + b;
				max_id = id;
			}
		}
		printf("%d %d\n",max_id,max_value);
	}

    return 0;
}