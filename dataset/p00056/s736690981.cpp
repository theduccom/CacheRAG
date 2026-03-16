#include <iostream>
using namespace std;

int p[50001] ={0};


int main()
{	
	for(int i=4;i<=50000;i++){
		if(i%2==0) p[i] = 1;
		for(int j=3;j*j<=i;j++){
			if(i % j == 0){
				p[i] = 1;
			}
		}
	}
	
	int n;
	while(cin>>n && n){
		int cnt = 0;
		for(int i=2;i<=n/2;i++){
			if( p[i]==0 && p[n-i]==0 ){
					cnt++;
			}	
		}
		
		cout<<cnt<<endl;
	}
	return 0;
}