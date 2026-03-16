#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
	int place = 0;
	char mv1, mv2;
	
	while(cin >> mv1){
		cin.ignore();
		cin >> mv2;
		if(mv1 > mv2) swap(mv1, mv2);
		if(place == 0 && mv1 == 'A'){
			if(mv2 == 'B') place = 1;
			if(mv2 == 'C') place = 2;
		}else if(place == 1){
			if(mv1 == 'A' && mv2 == 'B'){
				place = 0;
			}else if(mv1 == 'B' && mv2 == 'C'){
				place = 2;
			}
		}else if(place == 2 && mv2 =='C'){
			if(mv1 == 'A'){
				place = 0;
			}else{
				place = 1;	
			}
		}
	}
	if(place == 0){
		cout << "A" << endl;
	}else if(place == 1){
		cout << "B" << endl;
	}else{
		cout << "C" << endl;
	}
}