#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
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
#define pu push
#define pb push_back
#define mp make_pair
#define eps 1e-7
#define INF 2000000000
int main()
{
	int x,h;
	while(1)
	{
		cin >> x >> h;
		if(x==0&&h==0)break;
		double t;
		t = sqrt((((double)x)/2.0)*(((double)x)/2.0)+(double)(h*h));
		double ans=0.0;
		ans += x*x;
		ans += double(x)*t*2;
		printf("%.6f\n",ans);
	}
	return 0;
}