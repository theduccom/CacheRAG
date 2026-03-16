#include<iostream>
#include<algorithm>

using namespace std;

int main(void){

	int n,a2,a5,tmp;

	while(1){
		cin>>n;
		if(n==0) break;
		a2=0,a5=0;
		for(int i=1;i<=n;i++){
			tmp=i;
			while(tmp%2==0){
				a2++;
				tmp/=2;
			}
			while(tmp%5==0){
				a5++;
				tmp/=5;
			}
		}
		cout<<min(a2,a5)<<endl;
	}

	return 0;
}