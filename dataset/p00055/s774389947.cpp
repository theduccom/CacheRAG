#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(){
	double a,s;
	while(cin>>a){
		s=a;
		for(int i=1;i<10;i++){
			if(i%2==1){
				s+=a*2;
				a*=2;
			}
			if(i%2==0){
				s+=a/3;
				a/=3;
			}
		}
		cout<<fixed<<setprecision(10)<<s<<endl;
	}
	return 0;
}