#include <iostream>
#include <cmath>
#include <vector>
#include <cstdio>
#include <algorithm>
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define repp(i,r,n) for(int i=r;i<(int)n;i++)
using namespace std;
int in(){int x;cin>>x;return x;}
int n;
vector<int> a,b,c;

int main ()
{
	cin>>n;
	while(n--)
	{
		double ax,ay,ar,bx,by,br;
		cin>>ax>>ay>>ar>>bx>>by>>br;
		double half=sqrt((bx-ax)*(bx-ax)+(by-ay)*(by-ay));

		if(half-ar-br>0)
		{
			cout<<"0"<<endl;
		}
		else if(half+br<ar)cout<<2<<endl;
		else if(half+ar<br)cout<<-2<<endl;
		else cout<<1<<endl;

	}

	return 0;
}