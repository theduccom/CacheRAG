#include<cstdio>
#include<iostream>
using namespace std;
int main(void){
	int n,flg,i,j,p1,q1,fllg,ii;
	while(1){
		cin>>n;
		if(n==0)break;
		for(i=n;i>1;i--){
			flg=1;
			if(i!=2&&i%2!=0){
				for(j=2;j<i;j++){
					if(i%j==0){
						flg=0;
						break;
					}
				}
				if(flg==1){
					ii=i-2;
					for(j=2;j<ii;j++){
						if(ii%j==0){
							flg=0;
							break;
						}
					}
				}
				if(flg==1) flg=2;
			}
			if(flg==2){
				p1=ii;
				q1=i;
				break;
			}
		}
		cout<<p1<<' '<<q1<<endl;
		p1=0; q1=0;
	}
	return 0;
}