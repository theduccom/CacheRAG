#include<iostream>
#include<iomanip>
#include<vector>
#include<string>
#include<string.h>
#include<math.h>
#include<utility>
#include<algorithm>
#include<functional>
using namespace std;

string m;
int n;
int a=0;
int s=0;
int o=0;
int p=0;

int main()
{
	cin>>n;
    for(int i=0;i<n;i++)
	{
	int f=0;
	p=0;
	o=0;
	
	while(true)
	{
	cin>>m;
	
	if(m=="OUT")o++;
	
	if(o==3)break;
	
	if(m=="HIT")
	{
	
	if(f==3)p++;
	if(f==2)f++;
	if(f==1)f++;
	if(f==0)f++;
	}//HIT

	if(m=="HOMERUN")
	{
	if(f==0){p=p+1;}
	if(f==1)
	{
	p=p+2;
	f=0;
	}
	if(f==2)
	{
	p=p+3;
	f=0;
	}
	if(f==3)
	{
	p=p+4;
	f=0;
	}
	}//HOMERUN


	}
	 cout<<p<<endl;

	
	
	


	}


	return 0;
}