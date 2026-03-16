#include <iostream>
#include <cmath>
using namespace std;
bool flg[10000001];

int main(){

	for(int i=0;i <= 1000000;i++){
		if(i<=1)flg[i]=false;
		else flg[i]=true;
	}
	for(int i=2;i <= 1001 ;i++){
		if(flg[i]==true){
			for(int j=i*2 ; j<=1000000 ; j=j+i){
				flg[j] = false;
			}
		}
	}
    while(1){
        int n=0,ans=0;
		cin>>n;
		if(!n)break;
		for(int i=2;i<=n;i++){
            if(flg[i]==true&&flg[n-i]==true&&i<=n-i)ans++;
		}
		cout<<ans<<endl;

	}
}