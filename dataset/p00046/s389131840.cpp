#include <cstdio>
using namespace std;

int main()
{
	double hei;
	double max_, min_;
	bool flag = false;
	
	while (scanf("%lf", &hei) != EOF){
		if (flag == false){
			max_ = hei;
			min_ = hei;
			flag = true;
		}
		if (hei > max_){
			max_ = hei;
		}
		else if (hei < min_){
			min_ = hei;
		}
	}
	
	printf("%.1lf\n", max_ - min_);
	
	return (0);
}