#include <iostream>
using namespace std;

int main() {
	int w,i;
	int sum;
	while(1){
		cin>>w;
		sum=1150;
		if(w==-1) break;
		if(w>30) {
			sum+=(w-30)*160;
			w=30;
		}
		if(w>=20){
			sum+=(w-20)*140;
			w=20;
		}
		if(w>=10){
			sum+=(w-10)*125;
		}
		sum=4280-sum;
		cout<<sum<<endl;
	}
	return 0;
}