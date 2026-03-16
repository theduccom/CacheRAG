#include<iostream>
using namespace std;
int main(){
	int now,sum;
	while(cin>>now,now!=-1){
		sum=1150;
		now-=10;
		if(now>0){
			sum+=(now*125);
			now-=10;
		}
		if(now>0){
			sum+=(now*15);
			now-=10;
		}
		if(now>0){
			sum+=(now*20);
		}
		cout<<4280-sum<<endl;
	}
	return 0;
}