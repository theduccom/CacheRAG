#include <iostream>
using namespace std;

int main() {
	int n,pm,pe,pj;
	while(cin>>n,n){
		for(;n;--n){
			cin>>pm>>pe>>pj;
			
			int avr = pm+pe+pj;
			
			if(pm==100 || pe==100 || pj==100)cout<<"A";
			else if(pm+pe>=180)cout<<"A";
			else if(avr>=240)cout<<"A";
			else if(avr>=210)cout<<"B";
			else if(avr>=150 && (pm>=80||pe>=80))cout<<"B";
			else cout<<"C";
			
			cout<<endl;
		}
	}
	return 0;
}