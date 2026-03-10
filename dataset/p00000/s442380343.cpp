#include<iostream>
using namespace std;

int main()
{
  int ans=0; 
  for(int i=0;i<9;i++)
  {
     for(int j=0;j<9;j++)
     {
       ans=(i+1)*(j+1);
       cout<<i+1<<"x"<<j+1<<"="<<ans<<endl;
     }
  }
  return 0;
}