#include <iostream>
using namespace std;

struct circle{
	double x;
	double y;
	double r;
};

int judge_intersection(circle ca, circle cb){
	double dis2 = (ca.x - cb.x) * (ca.x - cb.x)
				+ (ca.y - cb.y) * (ca.y - cb.y);
	if((ca.r > cb.r) && ((ca.r - cb.r) * (ca.r - cb.r) > dis2)){
		return 2;
	} else if((cb.r > ca.r) && ((ca.r - cb.r) * (ca.r - cb.r) > dis2)){
		return -2;
	} else if((ca.r + cb.r) * (ca.r + cb.r) >= dis2){
		return 1;
	} else {
		return 0;
	}
}

int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		circle ca, cb;
		cin >> ca.x >> ca.y >> ca.r
			>> cb.x >> cb.y >> cb.r;
		cout << judge_intersection(ca, cb) << endl;
	}
	return 0;
}