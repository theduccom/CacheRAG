#include <functional>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <cstring>
#include <iomanip>
#include <fstream>
#include <climits>
#include <cctype>
#include <cstdio>
#include <string>
#include <vector>
#include <bitset>
#include <queue>
#include <stack>
#include <cmath>
#include <ctime>
#include <deque>
#include <list>
#include <map>
#include <set>
using namespace std;

typedef long long LL;
typedef unsigned int ui;
typedef unsigned long long ULL;

typedef pair < int , int > ii;
typedef pair < LL  , LL  > ll;

typedef vector <int>  vint;
typedef vector <bool> vbool;
typedef vector <long> vlong;

#define sz(x)			((int)x.size())
#define tin(x)			scanf("%d",&x)
#define all(x)			x.begin(),x.end()
#define Set(b,a)		memset(b,a,sizeof b)
#define print1(x)		printf("Case %d:",x++)
#define tin2(x,y)		scanf("%d%d",&x,&y)
#define tin3(x,y,z)		scanf("%d%d%d",&x,&y,&z)
#define loop(i,i0,in)	for(int i=i0 ; i<in ; i++)
#define rep(i,n)		for(int i=0 ; i<(n) ; i++)
#define Fore(it, x)		for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
     
int main()  
{  
#ifdef Online_Judge
	freopen("a.in","r",stdin);
#endif
	loop(i,1,10)
	{
		loop(j,1,10)
			printf("%dx%d=%d\n",i,j,i*j);
	}
	return 0;
}  