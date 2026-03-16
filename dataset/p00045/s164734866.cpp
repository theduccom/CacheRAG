#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	double sum=0,cnt=0,a=0,b=0,i=0;
	while(scanf("%lf,%lf",&a,&b)!=EOF){
	cnt+=b;
	sum+=a*b;
	i++;
	}
	int s=(int)(cnt/i);
	if((double)s+0.500<=sum)s++;
	cout<<sum<<endl<<s<<endl;
	return 0;
}