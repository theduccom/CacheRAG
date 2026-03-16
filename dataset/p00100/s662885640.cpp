#include <iostream>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)
#define ll long long

int main()
{
    while (1)
    {
	int n,f=0,id,f2[4001];
	ll price,num,p[4001];
	rep(i,4001){p[i]=0;f2[i]=0;}
	cin >> n;
	if (n==0)break;
	rep(i,n)
	{
	    cin >> id >> price >> num;
	    p[id]+=price*num;
	    if (p[id] >= 1000000 && f2[id]==0)
	    {
		cout << id << endl;
		f=1;
		f2[id]=1;
	    }
	}
	if (f==0)cout << "NA" << endl;
    }
    return 0;
}