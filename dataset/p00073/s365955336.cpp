#include <bits/stdc++.h>
#define r(i,a,n) for(int i=a;i<n;i++)
using namespace std;
int main(){
	double a,b;
	while(cin>>a>>b,a){
		printf("%.10f\n",(a*a)+2*a*sqrt(((a/2)*(a/2)+b*b)));
	}
}