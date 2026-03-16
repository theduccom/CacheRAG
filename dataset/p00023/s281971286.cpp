#include <iostream>

using namespace std;


int main()
{
  int i;
  cin>>i;
  for(;i--;)
    {

      double xa,ya,ra,xb,yb,rb;     
      int ans;
      cin>>xa>>ya>>ra>>xb>>yb>>rb;
      double d = (xa-xb)*(xa-xb)+(ya-yb)*(ya-yb);
      if(d  > ((ra+rb)*(ra+rb)))
	ans = 0;
      else if (d < ((ra-rb)*(ra-rb)) && ra>rb)
	ans = 2;
      else if (d  < ((rb-ra)*(rb-ra)) && rb>ra)
	ans =-2;
      else
	ans =1;
      cout<<ans<<endl;

    }

}