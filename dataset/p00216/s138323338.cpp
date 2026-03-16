#include <stdio.h>
#include <vector>
using namespace std;
int main(){
	int w,sum;
	while(1){
		scanf("%d",&w);
		if(w == -1)break;
		sum = 1150;
		if(w > 10)	sum += 125*(min(10,w-10));
		if(w > 20)sum += 140*(min(10,w-20));
		if(w > 30) sum += 160*(w-30);
		printf("%d\n",4280-sum);
	}
}
