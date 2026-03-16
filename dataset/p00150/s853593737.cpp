#include<iostream>
#include<string>
using namespace std;
int prime[10000];
int main(){
	int count=0;
	int k=2;
	while(true){
		bool t=true;
		for(int i=0;i<count;i++){
			if(k%prime[i]==0)
				t=false;
		}
		if(t==true){
			prime[count]=k;
			count++;
		}
		k++;
		if(k==10000)
			break;
	}
	int n;
	while(true){
	cin>>n;
	if(n==0)
		break;
	k=n;
	while(true){
		bool up=false;
		for(int i=0;i<count;i++){
			if(prime[i]==k)
				up=true;
		}
		bool down=false;
		for(int i=0;i<count;i++){
			if(prime[i]==k-2)
				down=true;
		}
		if(up==true&&down==true)
			break;
		k--;
	}
	cout<<k-2<<" "<<k<<endl;
	}
	return 0;
}