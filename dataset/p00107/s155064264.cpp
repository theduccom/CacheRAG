#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int r,c,h;
	while(cin>>r>>c>>h,r) 
	{
		int n; cin>>n;
		for(int i = 0; i < n; ++i)
		{
			int rr; cin>>rr; rr*=2;
			if(sqrt(rr*rr)<=sqrt(r*r+c*c)&&sqrt(rr*rr)<=sqrt(c*c+h*h)&&sqrt(rr*rr)<=sqrt(h*h+r*r)) cout<<"NA"<<endl;
			else cout<<"OK"<<endl;
		}
	}
  return 0;
}