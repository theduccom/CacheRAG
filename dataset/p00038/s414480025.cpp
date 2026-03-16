#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
	int a[5];
	while(~scanf("%d,%d,%d,%d,%d", &a[0], &a[1], &a[2], &a[3], &a[4]))
	{
		map<int, int> input;
		for(int i = 0; i < 5; ++i)
		{
			++input[a[i]];
		}
		vector<int> cards;
		map<int, int>::iterator it = input.begin();
		while(it != input.end())
		{
			cards.push_back(it->second);
			++it;
		}
		sort(cards.begin(), cards.end(), greater<int>());
		if(cards.size() == 2)
		{
			if(cards[0] == 4 && cards[1] == 1)
			{
				cout << "four card" << endl;
			}
			else if(cards[0] == 3 && cards[1] == 2)
			{
				cout << "full house" << endl;
			}
		}
		else if(cards.size() == 3)
		{
			if(cards[0] == 3 && cards[1] == 1 && cards[2] == 1)
			{
				cout << "three card" << endl;
			}
			else if(cards[0] == 2 && cards[1] == 2 && cards[2] == 1)
			{
				cout << "two pair" << endl;
			}
		}
		else if(cards.size() == 4)
		{
			cout << "one pair" << endl;
		}
		else
		{
			int b[5];
			int pos = 0;
			map<int, int>::iterator it = input.begin();
			while(it != input.end())
			{
				b[pos] = it->first;
				++it;
				++pos;
			}
			if(b[1] == b[0] + 1 && b[2] == b[1] + 1 && b[3] == b[2] + 1 && b[4] == b[3] + 1 ||
			   b[0] == 1 && b[1] == 10 && b[2] == 11 && b[3] == 12 && b[4] == 13)
			{
				cout << "straight" << endl;
			}
			else
			{
				cout << "null" << endl;
			}
		}
	}
}

int main()
{
	solve();
	return(0);
}