#include<iostream>
using namespace std;
int main(){
	for(;;){
		int n,sum=0;
		cin >>n;
		if(n == 0){break;}
		for(int i=5;i<=n;i*=5){
			sum+=n/i;
		}
		cout<<sum<<endl;
	}
	return 0;
}