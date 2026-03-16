#include<iostream>
#include<math.h>
using namespace std;

int main(){
	double x[2];
	double y[2];
	double r[2];
	double dist;
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> x[0] >> y[0] >> r[0] >> x[1] >> y[1] >> r[1];
		dist = hypot(x[0] - x[1], y[0] - y[1]);
		if(r[0] > dist + r[1]){
			printf("2\n");
		}else if(r[1] > dist + r[0]){
			printf("-2\n");
		}else if(r[0] + r[1] < dist){
			printf("0\n");
		}else{
			printf("1\n");
		}
	}
	return 0;
}