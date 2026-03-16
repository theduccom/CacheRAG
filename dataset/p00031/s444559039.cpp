#include<iostream>
using namespace std;
int main(){
	int W;
	while(cin>>W){
		bool flag=0;
		for(int i=1;i<=W;i*=2){
			if((W/i)%2==1){
				cout<<(flag?" ":"")<<i;
				flag=1;
			}
		}
		cout<<endl;
	}
	return 0;
}
