#include<iostream>

using namespace std;


int main(void){
	
	while(1){
		int n;
		cin>>n;
		
		if(n==0)break;
		
		int ans = 0;
		while(1){
			if(n==0)break;
			ans += n/5;
			n/=5;
		}
		
		cout<<ans<<endl;
	}
}