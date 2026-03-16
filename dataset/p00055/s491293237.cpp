#include<iostream>
#include <iomanip>

using namespace std;
int main()
{
  double s;

  for(;cin>>s;)
    {
  double sum=s;
  for(int i=2;i<=10;i++)
    {
      if(i%2==0)
	s*=2;
      else
	s/=3;
      sum+=s;
    }
   cout<< fixed << setprecision(8)<<sum<<endl;
    }
}