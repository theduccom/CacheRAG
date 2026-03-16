#include <iostream>
#include <cstdio>

using namespace std;

int main() {

	int a, b, c, ob=0, dia=0;

	while(scanf("%d, %d, %d", &a, &b, &c)!=EOF) {
		if(c*c==a*a+b*b)
			ob++;
		else if(a==b)
			dia++;
	}

	cout << ob << endl << dia << endl;

	return 0;

}