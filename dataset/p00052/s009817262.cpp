#include<iostream>
using namespace std;

int main() {
	int n,x;
	int h[23];
	//
	{
		h[0] = 0;
		h[1] = 0;
		h[2] = 0;
		h[3] = 0;
		h[4] = 0;
		h[5] = 0;
		h[6] = 0;
		h[7] = 0;
		h[8] = 0;
		h[9] = 0;
		h[10] = 0;
		h[11] = 0;
		h[12] = 0;
		h[13] = 0;
		h[14] = 0;
		h[15] = 0;
		h[16] = 0;
		h[17] = 0;
		h[18] = 0;
		h[19] = 0;
	}
	for (int i = 0; i < 20; i++){
		cin >> n;
		if (n == 0){
			x = i;
			break;
		}
		for (int j = 1; j < (n + 1); j++){
			if (j % 5 == 0) {
				h[i] += 1;
				if ((j / 5) % 5 == 0){
					h[i] += 1;
					if ((j / 25) % 5 == 0){
						h[i] += 1;
						if ((j / 125) % 5 == 0) {
							h[i] += 1;
							if ((j / 625) % 5 == 0){
								h[i] += 1;
								if ((j / 3125) % 5 == 0){
									h[i] += 1;
								}
							}
						}
					}
				}
			}
		}
	}
	for (int i = 0; i < x; i++){
		cout << h[i] << endl;
	}
	char c;
	cin >> c;
}