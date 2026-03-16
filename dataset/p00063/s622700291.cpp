#include<iostream>

using namespace std;
int main()
{
  string s;
  int a=0;
  for(;cin>>s;)
    {
      for(int i=0;;i++)
	{
	  if(s[i]!=s[s.size()-1-i])
	    break;
	  else if(i>=s.size()-1-i)
	    {
	      a++;
	      break;
	    }
	}
    }
     cout<<a<<endl;    
}