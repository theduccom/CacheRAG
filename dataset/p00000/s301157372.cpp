#include<iostream>
using namespace std;

int main(){

	int a=0;
	int b=0;

	for(int count=0;count<81;count++)
	{
		a++;
		if(0==a%10){a=1;}

		if(a==1)
		{
			b++;
			if(0==b%10){b=1;}
		}
	cout<<b<<"x"<<a<<"="<<a*b<<endl;
	}
    return 0;
}