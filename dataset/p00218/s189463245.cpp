#include <iostream>
using namespace std;

int main() {
	int n,c;
	double h,pm,pe,pj;
	while(cin >> n && n!=0) {
	for (;n>0;n--) {
		c=2;
		cin >> pm >> pe >> pj;
		h=(pm+pe+pj)/3;
		if ((h>=50 && (pm>=80 || pe>=80)) || h>=70) c=1;
		if (h>=80 || ((pm+pe)/2>=90) || pm==100 || pe==100 || pj==100) c=0;
		cout << (char)('A'+c) << endl;
	}
}
	return 0;
}