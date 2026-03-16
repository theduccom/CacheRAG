#include<iostream>
#include<string>
#include<vector>
#include<math.h>
using namespace std;

int main() {
	int dis1, rad1,dis2=0,rad2=0;
	double x = 0, y = 0,PI= 3.141592653589793;
	scanf("%d , %d", &dis1, &rad1);
	y += dis1; rad2 = rad1;
	while (scanf("%d , %d",&dis1,&rad1)) {
		if (dis1 != 0) {
			x += dis1*sin(rad2*PI/180);
			y += dis1*cos(rad2*PI/180);
			rad2 += rad1;
		}
		else {
			cout << int(x) << endl;
			cout << int(y) << endl;
			break;
		}
	}
	return 0;
}