#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n,n)
	{
		int cnt=0;
		while(0<n)
		{
			cnt+=n/5;
			n/=5;
		}
		cout<<cnt<<endl;
	}
  return 0;
}