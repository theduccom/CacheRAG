#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,m,e,j;
	char z;
	while(true){
	cin>>n;
	if(n==0)
		break;
	for(int i=0;i<n;i++){
		cin>>m>>e>>j;
		z='C';
		if(m+e+j>=210)
			z='B';
		if(m+e+j>=150&&(m>=80||e>=80))
			z='B';
		if(m==100||e==100||j==100)
			z='A';
		if(m+e>=180)
			z='A';
		if(m+e+j>=240)
			z='A';
		cout<<z<<endl;
	}
	}
    return 0;
}
 