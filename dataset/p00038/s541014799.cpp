#include<iostream>
#include<stdio.h>
#include<vector>
#include<utility>
#include<queue>
#include<math.h>
#include<string>
#include<algorithm>
#include<stack>
#include<typeinfo>
using namespace std;
typedef pair<int, int> P;
int main() {
	char ch, straight, four, three, twop, onep;
	int check[5] = { 1,10,11,12,13 }, st = 0;
	int card[5];	while (cin >> card[0] >> ch >> card[1] >> ch >> card[2] >> ch >> card[3] >> ch >> card[4]) {
		int cnt[14] = { 0 };
		sort(card, card + 5);
		four = false;
		three = false;
		twop = false;
		onep = false;
		straight = true;
		st = 0;
		for (int i = 0; i < 5; ++i) {
			if (i != 0 && card[i - 1] + 1 != card[i])straight = false;
			if (card[i] == check[i])st++;
			cnt[card[i]]++;
		}
		if (st == 5)straight = true;
		for (int i = 0; i < 5; ++i) {
			if (i != 0 && card[i - 1] == card[i])continue;
			if (cnt[card[i]] == 4) {
				four = true;
				break;
			}
			else if (cnt[card[i]] == 3) three = true;
			else if (cnt[card[i]] == 2 && onep)twop = true;
			else if (cnt[card[i]] == 2)onep = true;
		}

		if (four)cout << "four card" << endl;
		else if (onep&&three)cout << "full house" << endl;
		else if (straight)cout << "straight" << endl;
		else if (three)cout << "three card" << endl;
		else if (twop)cout << "two pair" << endl;
		else if (onep)cout << "one pair" << endl;
		else cout << "null" << endl;


	}
	return 0;
}
