#include<iostream>
using namespace std;

int main(){
	int w;
	while(cin >> w, w != -1){
		int fee = 1150;
		for(int i=11; i <= 20 && i <= w; i++) fee += 125;
		for(int i=21; i <= 30 && i <= w; i++) fee += 140;
		for(int i=31; i <= w; i++) fee += 160;

		cout << 4280 - fee << endl;
	}
}