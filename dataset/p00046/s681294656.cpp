#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	double n;
	int cnt=0;
	double ans;
	vector<double> h;
	
	while(~scanf("%lf",&n)){
		h.push_back(n);
		cnt++;
	}
	sort(h.begin(),h.end());
	ans=(h[cnt-1]-h[0]);
	printf("%.1lf\n",ans);
	return 0;
}