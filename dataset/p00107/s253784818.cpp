#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	while(1)
	{
	int a[3]; cin >> a[0] >> a[1] >> a[2] ;
	if(a[0]==0 && a[1]==0 && a[2]==0) break;
	int n ; cin >>  n ;
	sort(a,a+3);
	long sum=a[0]*a[0]+a[1]*a[1];
	while(n--)
	{
		long tmp; cin >> tmp;
		if(4*tmp*tmp<=sum) cout << "NA" << endl;
		else cout << "OK" << endl;
	}
	}
}