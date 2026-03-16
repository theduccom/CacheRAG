#include<iostream>
#include<string>

using namespace std;

void ans(string n);

int main()
{
	int i,j,cy;
	string a,b,c,d;
	int n;
	
	cin >> n;
	
	for(int k=0;k<n;k++)
	{
		c=d="";
		cin >> a >> b ;
		
		if(a.size()>b.size())
		{
			
			for(i=b.size();i<a.size();i++)
				d+="0";
				d+=b;
				b=d;
		}
		else
		{
			for(i=a.size();i<b.size();i++)
				d+="0";
				d+=a;
				a=d;
		}
//		cout << "a:" << a << endl;
//		cout << "b:" << b << endl;
		cy=0;
		for(i=a.size()-1,j=0;i>=0;i--,j++)
		{
			c+=a[i]+b[i]-'0'+cy;
			if(c[j]-'9'>0)
			{
				c[j]='0'+c[j]-':';
				cy=1;
			}
			else
				cy=0;
		}
		if(cy==1)
			c+=char(cy+48);
		if(c.size()<81)
			ans(c);
		else
			cout << "overflow" << endl;
	}
}

void ans(string n)
{
	for(int i=n.size()-1;i>=0;i--)
		cout << n[i] ;
	cout << endl;
	return ;
}