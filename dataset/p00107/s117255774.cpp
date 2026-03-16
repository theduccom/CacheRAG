#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  while(true)
    {
      int x,y,z;
      cin>>x>>y>>z;
      if(x==0 && y==0 && z==0)break;
      int n;
      cin>>n;
      for(int i=0;i<n;i++)
	{
	  int r;
	  cin>>r;
	  if(sqrt(pow((double)x/2,2)+pow((double)y/2,2))<r)cout<<"OK"<<endl;
	  else if(sqrt(pow((double)y/2,2)+pow((double)z/2,2))<r)cout<<"OK"<<endl;
	  else if(sqrt(pow((double)x/2,2)+pow((double)z/2,2))<r)cout<<"OK"<<endl;
	  else cout<<"NA"<<endl;
	}
    }
  return 0;
}