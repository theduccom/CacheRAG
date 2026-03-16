#include<iostream>
#include<map>
#include<queue>
#include<string>
#include<algorithm>
 
using namespace std;
 
typedef pair<const int,const int> P;
typedef pair<const string,P> PP;
 
map<const string,int> solve()
{
	map<const string,int> d;
	queue<PP> q;
	string t;
	q.push(PP("01234567",P(0,0)));
	while(!q.empty())
	{
		PP p = q.front(); 
		q.pop();
		string str = p.first;
		int n = p.second.first+1;
		int b = p.second.second;
		d[str] = n;
		if(b && b != 4)
		{
		  t = str;
		  swap(t[b],t[b-1]);
		  if(!d[t]) q.push(PP(t,P(n,b-1)));
		}
		if(b != 3 && b < 7)
		{
		  t = str;
		  swap(t[b],t[b+1]);
		  if(!d[t]) q.push(PP(t,P(n,b+1)));
		}
		if(b<4)
		{
		  t = str;
		  swap(t[b],t[b+4]);
		  if(!d[t]) q.push(PP(t,P(n,b+4)));
		}
		else
		{
		  t = str;
		  swap(t[b],t[b-4]);
		  if(!d[t]) q.push(PP(t,P(n,b-4)));
		}
	}
	return d;
}
 
int main(void)
{
  map<const string,int> d = solve();
  string str;
 
  while(getline(cin,str))
  {
	string t;
	for(int i = 0; i < str.size(); i++)
	{
		if(str[i]!=' ')
		{
			t+=str[i];
		}
	}
	cout << d[t]-1 << endl;
  }
  return 0;
}