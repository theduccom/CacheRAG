#include <iostream>
using namespace std;


int main(){
	int a, b;
	bool flag, ini=false;
	
	while(cin>>a>>b, a!=0&&b!=0){
		flag = false;
		if(ini)cout<<"\n";
		else   ini = true;
		while(a<=b){//cout<<a<<' '<<b<<"\n";
			if(a%4==0&&a%100!=0 || a%400==0){
				cout<<a<<"\n";
				flag = true;
			}
			a++;
		}
		if(!flag)cout<<"NA\n";
	}
	return 0;
}