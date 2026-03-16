#include <iostream>

using namespace std;

int main(){
	int two[15]={},n,cnt=-1,check[15]={},last=0;
	for(int i=0;i<11;i++){
		two[i]=1;
		for(int j=0;j<i;j++)two[i]*=2;
	}
	while(cin>>n){
		cnt=0;
		last=0;
		for(int i=0;i<10;i++){
			check[i]=0;
			if(n<two[i+1]){
				cnt=i;
				break;
			}
		}
		for(int i=cnt;i>=0;i--){
			if(n%2==1)check[i]++;
			n/=2;
		}
		for(int i=0;i<10;i++){
		if(check[i]==1){
			last=i;
			break;
		}
		}
		for(int i=cnt;i>=last;i--){
			if(check[i]==1&&last!=i)cout<<two[cnt-i]<<" ";	
			else if(i==last)cout<<two[cnt]<<endl;
		}
	}
}