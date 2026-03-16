#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int dataN;
	//scanf("%d", &dataN);
	cin>>dataN;
	for (int i = 0; i < dataN; i++) {
		double ax, ay, ra, bx, by, rb;
		//scanf("%f %f %f %f %f %f", &ax, &ay, &ra, &bx, &by, &rb);
		cin>>ax>>ay>>ra>>bx>>by>>rb;
		double d = (ax-bx)*(ax-bx) + (ay-by)*(ay-by);

		d = sqrt(d);

		if (d+rb < ra) {
		  cout<<2<<endl;
		} else if (d+ra < rb) {
		  cout<<-2<<endl;
		} else if (d <= ra+rb) {
		  cout<<1<<endl;
		} else {
		  cout<<0<<endl;
		}
	}
	return 0;
}