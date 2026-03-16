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


int main()
{
  int n;
  string s;
  map<string,vector<int> > book;
  map<string,vector<int> >::iterator it;
    while(cin>>s>>n)
    {
      book[s].push_back(n);
    }
    for(it=book.begin();it!=book.end();it++)
      {
	sort(it->second.begin(),it->second.end());
	cout<<it->first<<endl;
	for(vector<int>::iterator it2=it->second.begin();it2!=it->second.end();)
	  {
	    	cout<<*it2;
		it2++;
		if(it2!=it->second.end())
		  cout<<" ";
		else
		  cout<<endl;
	  }
	//	cout<<*it<<endl;
      }
}