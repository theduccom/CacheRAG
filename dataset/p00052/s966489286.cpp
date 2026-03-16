//階乗の末尾の０の個数
#include<iostream>

using namespace std;

int main(void){
	long long n;
	int ans=0;

	while(1){
		cin>>n;
		if(n==0)	break;
		while(n/5!=0){
			n/=5;
			ans+=n;
		}
		cout<<ans<<endl;
		ans=0;
	}

	return 0;
}