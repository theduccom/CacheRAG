#include <iostream>
using namespace std;
int main(){
	while(1){
	long n; cin >> n ;
	if(!n) break;
	long mod2=0; long mod5=0;
	for(long i=1;i<=n;i++){
	if(i%2!=0 && i%5!=0) continue;
	long temp2=i;
	while(1){
		if(temp2%2==0) mod2++,temp2/=2;
		else break;
	};
	long temp5=i;
	while(1){
		if(temp5%5==0) mod5++,temp5/=5;
		else break;
	};
	};
	long ans=min(mod2,mod5) ;
	cout << ans << '\n' ;
	};
}