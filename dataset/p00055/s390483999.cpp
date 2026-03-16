#include <iostream>
#include <math.h>
using namespace std;

double a,ans;

int main() {
	while(cin>>a){
		ans=a;
		for(int i=0;i<9;i++){
			if(i%2==0)a=a*2;
			else a=a/3;
			ans+=a;
		}
		printf("%f10\n",ans);
	}
}