#include<iostream>
using namespace std;
int main()
{
long double v,n;
long long int N;
while(cin>>v)
{
n=(4.9*((v/9.8)*(v/9.8)))/5+1;
N=n*100000000000000;	
if(N%100000000000000==0)
{
	cout<<N/100000000000000<<endl;
}
else if(N%100000000000000!=0)
{
	cout<<N/100000000000000+1<<endl;
}
}
return 0;
}