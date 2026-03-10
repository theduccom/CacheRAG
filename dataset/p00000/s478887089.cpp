#include<iostream>
using namespace std;

int main()
{
	int a=0,b=0;
	for(int i=0;i<9;i++)
	{
		a++;
		b=0;
		for(int j=0;j<9;j++){
			b++;
			cout<<a<<"x"<<b<<"="<<a*b<<endl;
		}
	}
}