#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
using namespace std;
static const double EPS = 1e-5;
typedef long long ll;


struct man{
  ll num;
  ll money;
};

int main()
{
  int n;
  while(true)
    {
      cin>>n;
      if(n==0)
	exit(0);
      vector<man> d;
      d.clear();
      for(int i=0;i<n;i++)
	{
	  ll num,a,b;
	  bool ch=false;
	  cin>>num;
	  cin>>a;
	  cin>>b;
	  for(int j=0;j<d.size();j++)
	    {
	      if(d[j].num==num)
		{
		d[j].money=d[j].money+a*b;
		ch=true;
		break;
		}
	    }
	  if(ch==false)
	    {
	      struct man x;
	      x.num=num;
	      x.money=a*b;
	      d.push_back(x);
	    }
	}
      int count=0;
      for(int j=0;j<d.size();j++)
	if(d[j].money>=1000000)
	  {
	    cout<<d[j].num <<endl;
	    //    cout<<d[j].num << "   "<< d[j].money<<endl;
	    count++;
	  }
      if(count<1)
	cout<<"NA"<<endl;

    }
}