#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
bool isstraight(int *n){
	for(int i=0;i<4;i++){
		if(n[i+1] - n[i] != 1){
			if(n[4] == 13 && n[0] == 1 && n[1] == 10 && n[2] == 11 && n[3] == 12){
				return true;
			}
			return false;
		}
	}
	return true;
}

int main(){
	int card[5];
	char tmp[4];
	while(cin >> card[0] >> tmp[0] >> card[1] >> tmp[1] >> card[2] >> tmp[2] >> card[3] >> tmp[3] >> card[4]){
		int n[14] = {0};
		for(int i=0;i<5;i++){
			n[card[i]]++;
		}
		sort(n,n+14,greater<int>());
		sort(card,card+5);
		if(isstraight(card)){
			cout << "straight" << endl;
		}
		else{
			if(n[0] == 4){
				cout << "four card" << endl;
			}
			else if(n[0] == 3){
				if(n[1] == 2){
					cout << "full house" << endl;
				}
				else{
					cout << "three card" << endl;
				}
			}
			else if(n[0] == 2){
				if(n[1] == 2){
					cout << "two pair" << endl;
				}
				else {
					cout << "one pair" << endl;
				}
			}
			else cout << "null" << endl;
		}
	}
	return 0;
}