#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int w[10] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
	int g;
	bool flag[10];
	bool fl;
	
	while (cin >> g){
		for (int i = 0; i < 10; i++){
			flag[i] = false;
		}
		
		for (int i = 9; i >= 0; i--){
			if (g >= w[i]){
				flag[i] = true;
				g -= w[i];
			}
		}
		
		fl = false;
		for (int i = 0; i < 10; i++){
			if (flag[i] == true){
				if (fl == true){
					cout << " ";
				}
				cout << w[i];
				if (fl == false){
					fl = true;
				}
			}
		}
		cout << endl;
	}
	
	return (0);
}