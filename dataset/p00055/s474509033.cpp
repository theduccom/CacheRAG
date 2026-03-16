#include <bits/stdc++.h>
using namespace std;

int main(){
	double x;
	while(scanf("%lf",&x) == 1){
		double ans = x;
		for(int i = 0; i < 9; i++){
			if(i % 2 == 0){
				x *= 2;
			}
			else{
				x /= 3;
			}
			ans += x;
		}
		printf("%.8f\n",ans);
	}
	return 0;
}

