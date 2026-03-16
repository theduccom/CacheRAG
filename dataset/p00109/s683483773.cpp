#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <tuple>
#include <queue>
#include <set>
#include <cstdio>
#include <climits>
#include <cmath>
#include <array>
#include <functional>
#include <list>
#include <iomanip>
#include <set>
#include <cctype>
using namespace std;
typedef string::const_iterator State;
const int MOD=1000000007;
const int INF=1000000000;
typedef long long ll;
typedef vector<int> vi;
const double eps=1e-9;
const int inf=1e9;
typedef pair<int,int> P;

class Parser{
public:

  int number(State &begin)
  {
    int ret=0;
    while(isdigit(*begin))
      {
	ret*=10;
	ret+=*begin-'0';
	begin++;
      }
    return ret;
  }

  int expression(State &begin)
  {
    int ret=term(begin);
    for(;;)
      {
	if(*begin=='+')
	  {
	    begin++;
	    ret+=term(begin);
	  }
	else if(*begin=='-')
	  {
	    begin++;
	    ret-=term(begin);
	  }
	else
	  {
	    break;
	  }
      }
    return ret;
  }

  int term(State &begin)
  {
    int ret=factor(begin);
    for(;;)
      {
	if(*begin=='*')
	  {
	    begin++;
	    ret*=factor(begin);
	  }
	else if(*begin=='/')
	  {
	    begin++;
	    ret/=factor(begin);
	  }
	else
	  {
	    break;
	  }
      }
    return ret;
  }

  int factor(State &begin)
  {
    int ret;
    if(*begin=='(')
      {
	begin++;
        ret=expression(begin);
	begin++;
      }
    else
      {
	ret=number(begin);
      }
    return ret;
  }
};


int main(int argc,char const* argv[])
{
  int n;
  cin >> n;
  cin.ignore();
  for(int data=0;data<n;data++)
    {
      Parser ps;
      string s;
      getline(cin,s);
      State begin=s.begin();
      int ans=ps.expression(begin);
      cout << ans << endl;
    }
  return 0;
}

