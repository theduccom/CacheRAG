#include <bits/stdc++.h>
using namespace std;
const double eps=1e-9;
typedef vector<int> vi;
typedef long long ll;
int a,b;
int main(void)
{
  int tim=0;
  while(cin >> a >> b && a)
    {
      if(a==0 && b==0) break;
      if(tim!=0)
	{
	  cout << endl;
	}
      tim++;
      vector<int> ans;
  for(int i=a;i<=b;i++)
    {
      if(i%4==0 && i%100!=0) 
	{
	  ans.push_back(i);
	  continue;
	}
      if(i%400==0) ans.push_back(i);
      
    }
  if(ans.size()==0)
    {
      cout << "NA" << endl;
    }
  else
    {
      for(int i=0;i<int(ans.size());i++)
	{
	  cout << ans[i] << endl;
	}
    }
    }
  return 0;
}

