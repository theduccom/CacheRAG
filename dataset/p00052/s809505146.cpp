#include<iostream>

using namespace std;


int main(void){
	
	while(1){
		int n;
		cin>>n;
		
		if(n==0)break;
		
		
		int ans = 0;
		
		ans += n/5;
		ans += n/25;
		ans += n/125;
		ans += n/625; 
		ans += n/3125;
		ans += n/15625;
		
		cout<<ans<<endl;
	}
}