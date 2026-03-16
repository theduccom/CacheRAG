#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
	int w;

	while (1){
		int rs;

		scanf("%d", &w);
		if (w == -1){
			break;
		}

		if (w <= 10){
			rs = 1150;
		}
		else if (w <= 20){
			rs = 1150 + (w - 10) * 125;
		}
		else if (w <= 30){
			rs = 1150 + 1250 + (w - 20) * 140;
		}
		else if (30 < w){
			rs = 1150 + 1250 + 1400 + (w - 30) * 160;
		}

		cout << 4280 - rs << endl;
	}

	return (0);
}