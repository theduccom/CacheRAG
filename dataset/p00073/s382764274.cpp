#include <iostream>
#include <math.h>

# define REP(i,n) for(int i=0; i<n;i++)

using namespace std;

int main(){
	while(1){
		double x, h, ans;
		cin >> x >> h;
		if (x==0 && h==0) return 0;
		ans = sqrt((x/2)*(x/2)+h*h)*x*2+x*x;
		printf("%.6lf\n",ans);
	}
	return 0;
}


