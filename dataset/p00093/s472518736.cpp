#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <stack>

using namespace std;

int main(){
	int a,b,count;
	bool First=true;

	while(true){
		scanf("%d %d",&a,&b);
		if(a == 0 && b == 0)break;

		if(!First)printf("\n");

		count = 0;
		for(int i = a; i <=b; i++){
			if(i % 4 == 0){
				if(i % 100 == 0){
					if(i % 400 == 0){
						printf("%d\n",i);
						count++;
					}

				}else{
					printf("%d\n",i);
					count++;
				}
			}
		}

		if(count == 0)printf("NA\n");
		if(First)First = false;

	}
    return 0;
}