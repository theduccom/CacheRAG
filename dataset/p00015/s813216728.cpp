#include <iostream>
#include <string>
using namespace std;

int main(){
	int n, max;
	cin >> n;
	for (int z = 0; z < n;z++) {
		string x, xx, y, yy, outp;
		cin >> x >> y;
		if (cin.eof()) { break; }
		int lengx = x.size();
		int lengy = y.size();
		
		if (lengx > 80 || lengy > 80) {
			cout << "overflow" << endl;
			continue;
		}
		
		if (lengx < lengy){
			max = lengy;
		}
		else{
			max = lengx;
		}

		int m[81], n[81], wa[81];
		for(int i=0;i<81;i++){
			m[i] = 0;
			n[i] = 0;
			wa[i] = 0;
		}

		for (int i = 0; i<lengx; i++) {
			xx = x[lengx - i - 1];
			m[i] = stoi(xx);
		}
		for (int i = 0; i<lengy; i++) {
			yy = y[lengy - i - 1];
			n[i] = stoi(yy);
		}

		for(int i = 0; i < max; i++){
			wa[i] += n[i];
			wa[i] += m[i];

			if (wa[i]>=10){
				wa[i] -= 10;
				wa[i + 1] += 1;
			}

		}
		if(wa[80] == 1){
			cout << "overflow" << endl;
			continue;
		}

		int c = max;
		if(wa[max] == 1){
			c += 1;
		}

		for(int i=0;i<c;i++){
			outp += to_string(wa[c - i -1]);
		}
		cout << outp << endl;
	}
	return 0;
}