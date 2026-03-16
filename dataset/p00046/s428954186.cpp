#include <stdio.h>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main(){
	vector<double> h;
	double n;

	while( scanf("%lf", &n) != EOF ){
		h.push_back(n);
	}
	sort( h.begin() , h.end() );
	int i = h.size()-1;
	printf("%.1f\n", h[i]-h[0]);
	return 0;
}