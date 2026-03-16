#include <stdio.h>
#include <math.h>
#include <algorithm>

using namespace std;

int main(){
	double max = -1,min = 1000001,tmp;

	while(scanf("%lf",&tmp)!=EOF){
		max = (max >= tmp)?max:tmp;
		min = (min <= tmp)?min:tmp;
	}

	printf("%.1lf\n",max-min);

    return 0;
}