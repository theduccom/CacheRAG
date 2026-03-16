#include<iostream>
#include<string>
#include<sstream>
using namespace std;
string in;

int calc(int l,int r)
{
	int pa=0;
	for(int i = r; i >= l; --i)
	{
		if(in[i]==')') pa++;
		else if(in[i]=='(') pa--;
		else if(!pa)
		{
			if(in[i]=='+') return calc(l,i-1)+calc(i+1,r);
			if(in[i]=='-') return calc(l,i-1)-calc(i+1,r);
		}
	}
	pa=0;
	for(int i = r; i >= l; --i)
	{
		if(in[i]==')') pa++;
		else if(in[i]=='(') pa--;
		else if(!pa)
		{
			if(in[i]=='*') return calc(l,i-1)*calc(i+1,r);
			if(in[i]=='/') return calc(l,i-1)/calc(i+1,r);
		}
	}
	
	if(in[l]=='('&&in[r]==')') return calc(l+1,r-1);

	stringstream ss(in.substr(l,r-l+1));
	int res; ss>>res;
	return res;
}


int main()
{
	int n;
	cin>>n;
	while(n--) 
	{
		cin>>in;
		cout<<calc(0,in.size()-2)<<endl;
	}
  return 0;
}