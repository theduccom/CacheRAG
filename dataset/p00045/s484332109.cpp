#include<iostream>
#include<stdio.h>
using namespace std;
typedef long long ll;
ll t,m,sum,cnt,sum2;
double ave;
char ch;
int main(){
	sum=sum2=cnt=0;
	while(cin>>t>>ch>>m){
		//cin>>t>>m;
		//if(t==0)break;
		sum+=t*m;
		cnt++;
		sum2+=m;
	}
	//ave=(double)sum2/cnt;
	cout<<sum<<endl;
	cout<<(int)(sum2/(double)cnt+0.5)<<endl;
	//printf("%.0f\n",ave);
	//cin>>t;
	return 0;
}