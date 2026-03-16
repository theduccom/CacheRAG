#include <iostream>

using namespace std;


int main(){

	int *data;
	data = new int[50001];

	data[0]=0;
	data[1]=0;
	data[2]=1;
	data[3]=1;

	for(int i=3;i<=50000;i++){
		int flag=0;
		for(int j=3;j*j<=i;j+=2){
			if(i%j==0){
				flag=1;
				break;
			}
		}
		if(flag==1){
			data[i]=0;
		}
		else{
			data[i]=1;
		}
	}

	int n;
	while(1){
		cin>>n;
		if(n==0)break;
		if(n<=3){
			cout<<0<<endl;
			continue;
		}
		else if(n%2==1){
			if(data[n-2]==1){
				cout<<1<<endl;
			}
			else{
				cout<<0<<endl;
			}
			continue;
		}
		else if(n==4){
			cout<<1<<endl;
		}
		else{
			int cnt=0;
			for(int i=3;i<=n/2;i+=2){
				if(data[i]==1&&data[n-i]==1){
				//	cout<<i<<" "<<n-i<<endl;
					cnt++;
				}
			}
			cout<<cnt<<endl;
		}
	}
	return 0;
}