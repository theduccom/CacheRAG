#include<iostream>
#include<stdlib.h>

int main()
{
	using namespace std;
	int b1,b2,b3;
	cin>>b1>>b2>>b3;
	
	if(b1 && b2)
	{
		cout<<"Open"<<endl;
	}
	else if(b3)
	{
		cout<<"Open"<<endl;
	}
	else
	{
		cout<<"Close"<<endl;
	}
	
	return 0;
}