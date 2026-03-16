#include <bits/stdc++.h>
using namespace std;
int main(){
 	long double tm,sum;
	while(cin>>tm){
		sum = 0;
		for(int i=0;i<5;i++){
			sum+=tm;
			tm*=2.0;
			sum+=tm;
			tm/=3.0;
		}
		printf("%.6Lf\n",sum);
	}
}