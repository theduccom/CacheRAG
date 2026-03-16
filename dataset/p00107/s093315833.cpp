#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	int a[3];
	while(cin>>a[0]>>a[1]>>a[2]&&(a[0]||a[1]||a[2]))
	{
		sort(begin(a),end(a));
		int n;cin>>n;
		int l=a[0]*a[0]+a[1]*a[1];
		
		for(int i=0;i<n;i++)
		{
			int k;cin>>k;
			k*=2;
			k*=k;
			cout<<(l>=k?"NA":"OK")<<endl;
			
		}
	}
	
	
}