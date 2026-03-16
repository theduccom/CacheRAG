#include<iostream>
#include <iomanip>
#include<vector>
#include<string>
#include<string.h>
#include<math.h>
#include<utility>
#include<algorithm>
#include<functional>
using namespace std;

long double a=0;

int main()
{

    while(cin>>a)
    {
    
   long double s=0;
      
    s=a;
    for(int i=0;i<4;i++)
    {
    a=2*a;
    s=s+a;
    a=a/3;
    s=s+a;
  
    }
    s=s+a*2;
    cout<<setprecision(10)<<s<<endl;
    }
    return 0;
}