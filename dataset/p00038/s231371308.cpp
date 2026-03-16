#include<iostream>
#include<algorithm>

bool isFourCard(int cards[5]){
	bool res = true;

	for (int i = 1; i < 4; i++){
		if (cards[i] != cards[i + 1])res = false;
	}

	if (res)return true;

	res = true;

	for (int i = 0; i < 3; i++){
		if (cards[i] != cards[i + 1])res = false;
	}

	return res;
}

bool isFullHouse(int cards[5]){
	if (cards[0] == cards[1] && cards[2] == cards[3] && cards[3] == cards[4])return true;
	if (cards[0] == cards[1] && cards[1] == cards[2] && cards[3] == cards[4])return true;

	return false;
}

bool isStraight(int cards[5]){
	bool res = true;

	for (int i = 0; i < 4; i++){
		if (cards[i] + 1 != cards[i + 1])res = false;
	}

	if (cards[0] == 1 && cards[1] == 10 && cards[2] == 11 && cards[3] == 12 && cards[4] == 13)res = true;

	return res;
}


bool isThreeCard(int cards[5]){
	for (int i = 0; i < 3; i++){
		if (cards[i] == cards[i + 1] && cards[i + 1] == cards[i + 2])return true;
	}

	return false;
}

int Pair(int cards[5]){
	int cnt = 0;

	for (int i = 0; i < 4; i++){
		if (cards[i] == cards[i + 1])cnt++;
	}

	return cnt;
}

int main(){

	int cards[5];

	while (std::cin >> cards[0]){
		
		for (int i = 1; i < 5; i++){
			char a;
			std::cin >> a >> cards[i];
		}

		std::sort(cards, cards + 5);

		if (isFourCard(cards)){
			std::cout << "four card" << std::endl;
			continue;
		}

		if (isFullHouse(cards)){
			std::cout << "full house" << std::endl;
			continue;
		}

		if (isStraight(cards)){
			std::cout << "straight" << std::endl;
			continue;
		}

		if (isThreeCard(cards)){
			std::cout << "three card" << std::endl;
			continue;
		}

		if (Pair(cards) == 2){
			std::cout << "two pair" << std::endl;
			continue;
		}

		if (Pair(cards) == 1){
			std::cout << "one pair" << std::endl;
			continue;
		}

		if (Pair(cards) == 0){
			std::cout << "null" << std::endl;
			continue;
		}
	}
	return 0;
}