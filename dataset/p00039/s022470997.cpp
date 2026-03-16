#include<iostream>
#include<map>
using namespace std;

int main()
{
  map<char,int> a;
  a['I'] = 1;
  a['V'] = 5;
  a['X'] = 10;
  a['L'] = 50;
  a['C'] = 100;
  a['D'] = 500;
  a['M'] = 1000;

  string s;
  while(cin >> s)
    {
      int ans = 0;
      for(int i=0;i<s.length();i++)
	{
	  if(i == s.length()-1)
	    {
	      ans += a[s[i]];
	      continue;
	    }
	  if(a[s[i]] >= a[s[i+1]])
	    ans += a[s[i]];
	  else if(a[s[i]] < a[s[i+1]])
	    ans -= a[s[i]];
	}
      cout << ans << endl;
    }
  return 0;
}