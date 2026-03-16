#include<iostream>

using namespace std;

long long int pri[100000];

int main()
{
  fill(pri,pri+100000,1);
  for(int i=2;i<100000;i++)
    {
      if(pri[i]==0)
	continue;
      for(int j=i+i;j<100000;j+=i)
	{
	  pri[j]=0;
	}
    }
  int n;
  for(;cin>>n;)
    {
      int a,b,c;
      for(int i=1;;i++)
	{
	  if(pri[i]==0)
	    continue;
	  else
	    {
	      c=a;
	      a=b;
	      b=i;
	      if(i>n)
		break;
	    }	  
	}
      if(a!=n)
	cout<<a<<" "<<b<<endl;
      else
	cout<<c<<" "<<b<<endl;
    }

}