#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
int main(){
	int n;
	while(cin>>n,n){
	for(int i=0;i<n;i++){
		int a,b,c;
		bool f1=0,f2=0;
		cin>>a>>b>>c;
		if(a==100||b==100||c==100)f1=1;
		if((a+b)/2>=90)f1=1;
		if((a+b+c)/3>=80)f1=1;
		if((a+b+c)/3>=70)f2=1;
		if((a+b+c)/3>=50&&a>=80||b>=80)f2=1;
		if(f1==1)cout<<"A";
		else if(f2==1)cout<<"B";
		else if(f1==0&&f2==0) cout<<"C";
		cout<<endl;
		}
	}
}