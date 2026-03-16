#include<iostream>
#include<string>
using namespace std;
int main(){
	double a,b,c=0,d=0,i=0;
	char z;
	while(cin>>a>>z>>b){
		c+=a*b;
		d+=b;
		i++;
	}
	cout<<c<<endl;
	double e=d/i;
	e+=0.5;
	int f=e;
	cout<<f<<endl;
	return 0;
}