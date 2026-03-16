#include <iostream>
#include <cmath>
#include <deque>

inline double distance(double x1,double y1,double x2,double y2){
	return sqrt( (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2) );
}

int main(){
	int dataSetNum;
	std::cin >> dataSetNum;

	std::deque<int> number;

	for(int i = 0; i < dataSetNum; ++i){
		double xa, ya, ra, xb, yb, rb;
		std::cin >> xa >> ya >> ra >> xb >> yb >> rb;
		double dis = distance(xa, ya, xb, yb);
		//"0" if A and B do not overlap
		if(dis > ra + rb) number.push_back(0);
		//"2" if B is in A
		else if(dis + rb < ra) number.push_back(2);
		//"-2" if A is in B
		else if(dis + ra < rb) number.push_back(-2);
		//"1" if circumference of A and B intersect
		else number.push_back(1);
	}
	for(int i = 0; i < dataSetNum; ++i){
		std::cout << number.front() << std::endl;
		number.pop_front();
	}
	return 0;
	}