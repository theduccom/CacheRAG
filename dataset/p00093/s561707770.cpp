#include <iostream>
using namespace std;



int main(void) {
	int a, b, count = 0;
	while (cin>> a>> b, a || b) {
		if (count)
			cout << endl;
		bool NAflag = 0;
		for (int i = a; i <= b; i += 4-i%4) {
			bool flag;
			if (i % 4 == 0) {
				if (i % 100 == 0) {
					if (i% 400 == 0) {
						flag = 1;
					} else {
						flag = 0;
					}
				} else {
					flag = 1;
				}
			} else {
				flag = 0;
			}
			if (flag) {
				NAflag = 1;
				cout<< i<< endl;
			}
		}
		if (!NAflag)
			cout<< "NA"<< endl;
		++count;
	}
	return 0;
}