#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	double a;
	while(cin >> a){
		double ans = a;
		for(int i = 2; i <= 10; i++){
			if(i%2==0){
				ans += a = a*2;
			}
			else{
				ans += a = a/3;
			}
		}
		printf("%.8lf\n",ans);
	}
	return 0;
}