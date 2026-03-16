#include<iostream>
using namespace std;

int main()
{
	int a,b,i,flag;
	cin>>a>>b;
	flag = 2;
	while(b!=0){
		if(flag!=2)
			cout<<"\n";
		for(i=a;i<=b;i++){
			if(i%400==0){
				cout<<i<<"\n";
				flag=1;
			}
			else if(i%4==0 && i%100!=0){
				cout<<i<<"\n";
				flag = 1;
			}
		}
	     if(flag !=1)
			 cout<<"NA\n";
		cin>>a>>b;
		flag = 0;
	}

	return 0;
}