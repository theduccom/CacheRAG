#include<iostream>
#include<string>
using namespace std;
int main()
{
	string in;
	int ans=0;
	while (cin>>in) 
	{
		bool f=false;
		int i=0,j=in.size()-1;
		while(i<=j)
		{
			if(in[i]!=in[j])
			{
				f=true;
				break;
			}
			i++; j--;
		}
		if(!f) ans++; 
	}
	cout<<ans<<endl;
  return 0;
}