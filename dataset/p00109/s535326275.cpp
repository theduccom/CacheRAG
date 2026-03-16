#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <complex>
#include <string>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <bitset>
#include <functional>
#include <utility>
#include <algorithm>
#include <numeric>
#include <typeinfo>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <ctime>

using namespace std;

#define dump(n) cout<<"# "<<#n<<"="<<(n)<<endl
#define debug(n) cout<<__FILE__<<","<<__LINE__<<": #"<<#n<<"="<<(n)<<endl
#define repi(i,a,b) for(int i=int(a);i<int(b);i++)
#define rep(i,n) repi(i,0,n)
#define iter(c) __typeof((c).begin())
#define foreach(i,c) for(iter(c) i=(c).begin();i!=(c).end();i++)
#define allof(c) (c).begin(),(c).end()
#define mp make_pair

typedef unsigned int uint;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;
typedef pair<int,int> pii;

typedef pair<ll,const char*> parsed;

parsed expr(const char*);
parsed term(const char*);
parsed fact(const char*);

//parsed expr(const char* s)
//{
//	//cout<<"expr(\""<<s<<"\")"<<endl;
//	parsed now=term(s);
//	//while(*now.second!='=' && *now.second!=')'){
//	while(*now.second=='+' || *now.second=='-'){
//		char op=*now.second;
//		parsed next=term(now.second+1);
//		if(op=='+')
//			now=parsed(now.first+next.first,next.second);
//		else
//			now=parsed(now.first-next.first,next.second);
//	}
//	//cout<<"expr(\""<<s<<"\")="<<now.first<<endl;
//	return now;
//}
//
//parsed term(const char* s)
//{
//	//cout<<"term(\""<<s<<"\")"<<endl;
//	parsed now=fact(s);
//	//while(*now.second!='=' && *now.second!=')' && *now.second!='+' && *now.second!='-'){
//	while(*now.second=='*' || *now.second=='/'){
//		char op=*now.second;
//		parsed next=fact(now.second+1);
//		if(op=='*')
//			now=parsed(now.first*next.first,next.second);
//		else
//			now=parsed(now.first/next.first,next.second);
//	}
//	//cout<<"term(\""<<s<<"\")="<<now.first<<endl;
//	return now;
//}
//
//parsed fact(const char* s)
//{
//	//cout<<"fact(\""<<s<<"\")"<<endl;
//	if(s[0]=='('){
//		parsed res=expr(s+1);
//		res.second++;
//		return res;
//	}
//	else{
//		const char* p=s;
//		if(*p=='-')
//			p++;
//		ll n=0;
//		while(isdigit(*p)){
//			n=n*10+*p-'0';
//			p++;
//		}
//		return parsed(n,p);
//	}
//}

parsed expr(const char *p)
{
  parsed r=term(p);
  while(*r.second=='+'||*r.second=='-'){
    char op=*r.second;
    int tmp=r.first;
    r=term(r.second+1);
    if (op=='+') r.first=tmp+r.first;
    else r.first=tmp-r.first;
  }
  return r;
}

parsed term(const char *p)
{
  parsed r=fact(p);
  while(*r.second=='*'||*r.second=='/'){
    char op=*r.second;
    int tmp=r.first;
    r=fact(r.second+1);
    if (op=='*') r.first=tmp*r.first;
    else r.first=tmp/r.first;
  }
  return r;
}

parsed fact(const char *p)
{
  if (isdigit(*p)){
    int t=*(p++)-'0';
    while(isdigit(*p)) t=t*10+*(p++)-'0';
    return parsed(t,p);
  }
  else if (*p=='('){
    parsed r=expr(p+1);
    if (*r.second!=')') exit(0); // invalid input
    return parsed(r.first,r.second+1);
  }
  else
    exit(0); // invalid input
}

int main()
{
	//const char* s="-6/-4=";
	//parsed p=expr(s);
	//cout<<p.first<<","<<p.second<<endl;
	
	string s;
	getline(cin,s);
	while(getline(cin,s))
		cout<<expr(s.c_str()).first<<endl;
	
	return 0;
}