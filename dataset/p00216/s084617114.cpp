#include<iostream>
using namespace std;
int main(){
	// 30 20 10 0
	int w, sum = 0;
	cin >> w;
	while (w >= 0){
		if (w >= 30) sum += 1150 + 1250 + 1400 + ((w - 30) * 160);
		else if (w < 30 && w >= 20) sum += 1150 + 1250 + ((w - 20) * 140);
		else if (w < 20 && w >= 10)sum += 1150 + ((w - 10) * 125);
		else sum += 1150;
		cout << 4280-sum << endl;
		sum = 0;

		cin >> w;
	}
	return 0;
}