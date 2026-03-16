#include <cmath>
#include <iostream>

using namespace std;

int main() {

	int w, m;

	while(cin >> w) {
		if(w==-1)
			break;
		m=0;
		if(w>=30) {
			m+=abs((double)(30-w))*160;
			w-=abs((double)(30-w));
		}
		if(w>=20) {
			m+=abs((double)(20-w))*140;
			w-=abs((double)(20-w));
		}
		if(w>=10) {
			m+=abs((double)(10-w))*125;
			w-=abs((double)(10-w));
		}
		if(w<=10)
			m+=1150;
		cout << 4280-m << endl;
	}

	return 0;

}