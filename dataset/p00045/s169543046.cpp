#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main(){
	int price,num,cnt=0,sum=0,average=0;
	while(scanf("%d",&price)!=EOF){
		scanf(",%d",&num);
		sum+=price*num;
		cnt++;
		average+=num;
	}
	double ans=(double)average/cnt;
	int as=average/cnt;
	cout<<sum<<endl;
	if((ans-as)<0.5)cout<<as<<endl;
	else cout<<as+1<<endl;
	return 0;
}