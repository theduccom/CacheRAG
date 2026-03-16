#include <stdio.h>
#include<math.h>
using namespace std;

int main(){
	double v,N;

	while(scanf("%lf",&v)!=EOF){
		for(int N=0;;N+=1){
			if(N >= (v*v+98)/98){
				printf("%d\n",(int)N);
				break;
			}
		}
	}

    return 0;
}