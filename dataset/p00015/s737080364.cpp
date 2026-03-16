#include <iostream>
#include <cstring>

using namespace std;

void initiate(int* a)
{
	for (int j=0; j<101; j++) a[j] = 0;
}

int main()
{
	int a[101], b[101];
	char buf[101];
	
	int datasets;
	cin >> datasets;
	
	int len;
	
	for (int i=0; i<datasets; i++) {
		initiate(a); initiate(b);
		cin >> buf;
		len = strlen(buf);
		for (int j=0; j<len; j++) a[j] = static_cast<int>(buf[len-j-1] - 48);
		cin >> buf;
		len = strlen(buf);
		for (int j=0; j<len; j++) b[j] = static_cast<int>(buf[len-j-1] - 48);
		
		//test
		//for (int j=0; j<100; j++) cout << a[j];
		//cout << endl;
		//for (int j=0; j<100; j++) cout << b[j];
		//cout << endl;
		
		int carry = 0;
		for (int j=0; j<101; j++) {
			a[j] += b[j] + carry;
			carry = a[j] / 10;
			a[j] -= carry * 10;
		}
		
		bool nonzeroFlg = false;
		for (int j=100; j>=0; j--) {
			if (j>=80 && a[j]>0) {
				cout << "overflow";
				break;
			}
			if (a[j]>0) nonzeroFlg = true;
			if (nonzeroFlg) cout << a[j];
			if (j==0 && !nonzeroFlg) cout << 0;
		}
		
		cout << endl;
	}
	
	return 0;
}