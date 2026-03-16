#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <cassert>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <functional>
#include <iostream>
#include <map>
#include <set>
using namespace std;
typedef pair<int,int> P;
typedef pair<int,P> P1;
typedef pair<P,P> P2;
typedef long long ll;
#define pu push
#define pb push_back
#define mp make_pair
#define eps 1e-7
#define INF 1000000000
#define fi first
#define sc second
#define rep(i,x) for(int i=0;i<x;i++)
int main()
{
	while(1)
	{
		int n;
		cin >> n;
		if(n == -1) return 0;
		int v = 0;
		if(n <= 10) v = 1150;
		else if(n <= 20) v = 1150+(n-10)*125;
		else if(n <= 30) v = 2400+(n-20)*140;
		else v = 3800+(n-30)*160;
		cout << 4280-v << endl;
	}
}