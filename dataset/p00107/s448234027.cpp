#include<iostream>
#include<cmath>

using namespace std;

int main(void) {
	int h, w, d, n, r;
	int s, m, l;
	int i;

	while(true) {
		cin >> h >> w >> d;
		if(h == 0 && w == 0 && d == 0) { break; }
		cin >> n;
		for(i = 0; i < n; i++) {
			cin >> r;
			s = min(min(h,w),d);
			l = max(max(h,w),d);
			if(s == min(h,w) && l == max(h,w)) { m = d; }
			else if(s == min(h,d) && l == max(h,d)) { m = w; }
			else if(s == min(w,d) && l == max(w,d)) { m = h; }
			if(sqrt(s*s+m*m)/2 < r) {
				cout << "OK" << endl;
			} else {
				cout << "NA" << endl;
			}
		}
	}

	return 0;
}