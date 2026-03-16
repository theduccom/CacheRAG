#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	int wei[11];
	int sinn[11];
	int omosa=1;
	int n;
	int flag=0;
	for(int i=0;i<=10;i++){
		wei[i]=omosa;
		omosa*=2;
	}
	while(cin>>n){
		flag=0;
		for(int i=0;i<=10;i++){
			sinn[i]=n%2;
			n/=2;
		}
		for(int i=0;i<10;i++){
			if(sinn[i]==1){
				if(flag==0){
					flag=1;
					cout<<wei[i];
				}
				else cout<<' '<<wei[i];
			}
		}
		cout<<'\n';
	}
	return 0;
}