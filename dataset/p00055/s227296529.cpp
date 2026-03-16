#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	double a,temp,ans;
	while(scanf("%lf",&a)!=EOF){
		ans=0;
		for(int i=1;i<10;i++){
			ans+=a;
			if(i%2==1)
			a*=2;
			else
			a/=3;
		}
		printf("%.8lf\n",a+ans);
		
	}
	return 0;
}