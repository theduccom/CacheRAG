#include <iostream>
#include <algorithm>
using namespace std;

bool is_four(int cards[5]){
	int num;
	for(int i = 0; i < 2; i++){
		num = cards[i];
		for(int j = 0; j < 4; j++){
			if(cards[i+j] != num) break;
			if(j == 3) return true;
		}
	}
	return false;
}

bool is_full(int cards[5]){
	if(cards[0] == cards[1] && cards[3] == cards[4] 
	&& (cards[2] == cards[0] || cards[2] == cards[4]))
		return true;
	return false;
}

bool is_st(int cards[5]){
	int num = cards[0];
	for(int i = 1; i < 5; i++){
		if(cards[i] != (num + i)) break;
		if(i == 4) return true;
	}
	if(cards[0] == 1 && cards[1] == 10 && cards[2] == 11 
		&& cards[3] == 12 && cards[4] == 13)
		return true;
	return false;
}

bool is_three(int cards[5]){
	int num;
	for(int i = 0; i < 3; i++){
		num = cards[i];
		for(int j = 0; j < 3; j++){
			if(cards[i+j] != num) break;
			if(j == 2) return true;
		}
	}
	return false;
}

bool is_two(int cards[5]){
	int count = 0;
	if(cards[0] == cards[1] || cards[1] == cards[2]) count++;
	if(cards[2] == cards[3] || cards[3] == cards[4]) count++;
	if(count == 2) return true;
	return false;
}

bool is_one(int cards[5]){
	for(int i = 0; i < 4 ; i++){
		if(cards[i] == cards[i+1]) return true;
	}
	return false;
}

int main(){
	int cards[5];
	char c;
	while(cin >> cards[0] >> c >> cards[1] >> c 
		>> cards[2]	>> c >> cards[3] >> c >> cards[4])
	{
		sort(cards, cards + 5);
		if(is_four(cards)){
			cout << "four card" << endl;
		}else if(is_full(cards)){
			cout << "full house" << endl;
		}else if(is_st(cards)){
			cout << "straight" << endl;
		}else if(is_three(cards)){
			cout << "three card" << endl;
		}else if(is_two(cards)){
			cout << "two pair" << endl;
		}else if(is_one(cards)){
			cout << "one pair" << endl;
		}else {
			cout << "null" << endl;
		}
	}
	return 0;
}