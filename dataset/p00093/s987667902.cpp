#include<iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> a;
	for(int i=1;i<4000;i++)
	{
		if(i%400!=0&&i%100==0)continue;
		if(i%4==0)a.push_back(i);
	}
	int A,B;
	bool f=false;
	while(cin>>A>>B&&A&&B)
	{
		if(f)cout<<endl;
		f=true;
		bool flag=true;
		for(int i=0;i<a.size();i++)
		{
			if(A<=a[i]&&a[i]<=B)
			{
				flag=false;
				cout<<a[i]<<endl;
			}
			
		}
		if(flag)cout<<"NA"<<endl;
	}
	
}