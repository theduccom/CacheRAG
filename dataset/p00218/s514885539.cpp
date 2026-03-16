#include<iostream>
using namespace std;
int main(){
	int n;
	while(true){
	cin>>n;
	if(n==0)return 0;
	for(int pm,pe,pj;n>=1;n--){
		cin>>pm>>pe>>pj;
		if(pm==100||pe==100||pj==100)cout<<"A\n";
		else if(pm+pe>=180)cout<<"A\n";
		else if(pm+pe+pj>=240)cout<<"A\n";
		else if(pm+pe+pj>=210)cout<<"B\n";
		else if(pm+pe+pj>=150&&pm>=80||pe>=80)cout<<"B\n";
		else cout<<"C\n";
	}
	}
}