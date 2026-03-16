#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	double a,ans;
	while(cin>>a){
		ans=a;
		int k=2;
		while(10>=k){
			if(k%2==1){
				a/=3;
				ans+=a;
			}else{
				a*=2;
				ans+=a;
			}
			k++;
		}
		printf("%.8f\n",ans);
	}
}