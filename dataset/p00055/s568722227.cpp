#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main(void){

	double a;

	while(cin>>a){
        double ans=0;
        ans+=a;
        for(int i=2;i<=10;i++){
            if(i%2==0)a*=2;
            else a/=3;
            ans+=a;
        }
        printf("%lf\n",ans);

	}
	return 0;
}