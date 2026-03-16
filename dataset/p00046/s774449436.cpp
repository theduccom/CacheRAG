#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
	float t,Max = 0,Min = 1000000;
	while(scanf("%f",&t) != EOF){
		Max = max(Max,t);
		Min = min(Min,t);
	}
	printf("%f\n",Max - Min);
	return 0;
}