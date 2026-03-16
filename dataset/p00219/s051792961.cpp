#include<iostream>
using namespace std;
int main(){
	int kai, aicec;
	int aice[11] = { 100, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }; //??????
	int count[11] = { 0 };
	cin >> kai;
	while (kai != 0){//???????????¶
		for (int i = 0; i < kai; i++){
			cin >> aicec;
			for (int l = 1; l <= 10; l++){//??????
				if (aice[l] == aicec) count[l]++;//????????????
			}
		}
		for (int i = 1; i <= 10; i++){
			if (count[i] == 0)cout << "-" << endl;
			else {
				for (int l = 0; l < count[i]; l++){
					cout << "*";
				}cout << endl;
			}
		}
		for (int i = 1; i <= 10; i++) count[i] = 0;
		cin >> kai;
	}
	return 0;
}