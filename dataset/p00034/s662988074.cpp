#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
  int l[11],v1,v2;
  for(;~scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",&l[0],&l[1],&l[2],&l[3],&l[4],&l[5],&l[6],&l[7],&l[8],&l[9],&v1,&v2);)
    {
      for(int i=1;i<10;i++)
	  l[i]+=l[i-1];
      double num;
      int ans;
      // if(v1<v2)
	num=l[9]*(v1/((double)v1+v2));
      //      else
      //	num=l[9]*(v2/((double)v1+v2));
      for(int i=0;i<10;i++)
	{
	  if(l[i]>=num)
	    {
	      //  cout<<"l="<<l[i]<<"num="<<num<<endl;
	      ans=i+1;
	      break;
	    }
	}
	cout<<ans<<endl;
      //      cout<<l[9]<<endl;
    }
}