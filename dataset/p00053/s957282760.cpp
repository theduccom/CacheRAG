#include <iostream>
#include <cmath>
using namespace std;
bool flag[10000001];

int main(){
    int n=0,ans=0,co=0;
	for(int i=0;i <= 1000000;i++){
		if(i<=1)flag[i]=false;
		else flag[i]=true;
	}
	for(int i=2;i <= 1001 ;i++){
		if(flag[i]==true){
			for(int j=i*2 ; j<=1000000 ; j=j+i){
				flag[j] = false;
			}
		}
	}
    while(1){
        cin>>n;
        if(n==0)break;
		ans=0;
		co=0;
		for(int i=0;ans<n;i++){
			if(flag[i]==true){
				ans++;
				co+=i;
			}
		}
		cout<<co<<endl;
	}
}