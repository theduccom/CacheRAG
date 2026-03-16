#include <iostream>

using namespace std;

int main() {

	int n, m, e, j;

	while(cin >> n) {
		if(n==0)
			break;
		while(n>0) {
			cin >> m >> e >> j;
			if((m==100||e==100||j==100)||(double)((m+e)/2)>=90||(double)((m+e+j)/3)>=80)
				cout << "A" << endl;
			else if((double)((m+e+j)/3)>=70||((double)((m+e+j)/3)>=50&&(m>=80||e>=80)))
				cout << "B" << endl;
			else
				cout << "C" << endl;
			n--;
		}
	}

	return 0;

}