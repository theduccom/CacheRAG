#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector<double> height;
	double d;
	
	while((scanf("%lf", &d)) != EOF){
		height.push_back(d);
	}
	
	sort(height.begin(), height.end());
	
	printf("%lf\n", height.back() - height.front());
	
	return 0;
}