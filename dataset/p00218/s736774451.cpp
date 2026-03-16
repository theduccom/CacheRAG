#include<iostream>
using namespace std;
int main(){
	int n,a,b,c;
	while(cin>>n,n){
		while(n--){
			cin>>a>>b>>c;
			if((a==100||b==100||c==100)||a+b>=180||a+b+c>=240)
			cout<<'A'<<endl;
			else if(a+b+c>=210||(a+b+c>=150&&(a>=80||b>=80)))
			cout<<"B"<<endl;
			else cout<<"C"<<endl;
		}
	}
	return 0;
}