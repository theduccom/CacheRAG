#include <iostream>
#include <cstdio>
#include <map>
#include <algorithm>

void check_multiplicity(const int* sorted_cards, std::map<int,int>& multiplicities)
{
	multiplicities.clear();

	const int* current = sorted_cards;
	const int* end = sorted_cards + 5;
	while (current != end) {
		const int* next = std::upper_bound(current, end, *current);
		++multiplicities[next - current];
		current = next;
	}
}

int count(const std::map<int,int> multiplicities, int multiplicity)
{
	std::map<int,int>::const_iterator i = multiplicities.find(multiplicity);
	return (i != multiplicities.end()) ? i->second : 0;
}

bool check_straight(const int* sorted_cards, std::map<int,int> multiplicities)
{
	if (count(multiplicities, 1) != 5) {
		return false;
	}
	return (sorted_cards[4] == sorted_cards[0] + 4)
		|| (sorted_cards[0] == 1 && sorted_cards[1] == 10);
}

int main()
{
	int cards[5] = {};
	while (scanf("%d,%d,%d,%d,%d",&cards[0],&cards[1],&cards[2],&cards[3],&cards[4]) == 5) {
		std::sort(cards, cards + 5);
		std::map<int,int> multiplicities;
		check_multiplicity(cards, multiplicities);

		if (count(multiplicities, 4) > 0) {
			std::cout << "four card\n";
		} else if (count(multiplicities, 3) > 0 && count(multiplicities, 2) > 0) {
			std::cout << "full house\n";
		} else if (check_straight(cards, multiplicities)) {
			std::cout << "straight\n";
		} else if (count(multiplicities, 3) > 0) {
			std::cout << "three card\n";
		} else if (count(multiplicities, 2) == 2) {
			std::cout << "two pair\n";
		} else if (count(multiplicities, 2) == 1) {
			std::cout << "one pair\n";
		} else {
			std::cout << "null\n";
		}
	}
	return 0;
}