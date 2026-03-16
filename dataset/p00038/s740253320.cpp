#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <complex>
#include <ctime>
#include <cstdlib>

using namespace std;

inline int to_int(string s) {int v; istringstream sin(s); sin >> v; return v;}
template<class T> inline string to_str(T x) {ostringstream sout; sout << x; return sout.str();}

typedef long long ll;

struct cards{
	int num, card;
};

bool straight( vector<int> card )
{
	sort(card.begin(), card.end());
	int st = card[0];
	bool straight1 = true, straight2 = true;
	for(int i = 1; i < 5; i++)
	{
		st++;
		if(st != card[i])
		{
			straight1 = false;
			break;
		}
	}

	for(int i = 0; i < 5; i++)
	{
		if(card[i] == 1) card[i] = 14;
	}

	sort(card.begin(), card.end());
	st = card[0];
	for(int i = 1; i < 5; i++)
	{
		st++;
		if(st != card[i])
		{
			straight2 = false;
			break;
		}
	}

	return (straight1 || straight2);
}

int main()
{
	vector<int> card(5);
	vector<int> num;
	// num, card
	while(scanf("%d,%d,%d,%d,%d", &card[0], &card[1], &card[2], &card[3], &card[4]) != EOF)
	{
		num.clear();

		if(straight(card))
		{
			cout << "straight" << endl;
			continue;
		}

		sort(card.begin(), card.end());
		int cnt = 1;
		for(int i = 0; i < 5; i++)
		{
			if(card[i] == card[i+1])
			{
				cnt++;
			}
			else
			{
				num.push_back(cnt);

				cnt = 1;
			}
		}

		if(num.size() == 2)
		{
			if( num[0] == 4 || num[1] == 4)
			{
				cout << "four card" << endl;
			}
			if( num[0] == 3 && num[1] == 2 || num[0] == 2 && num[1] == 3)
			{
				cout << "full house" << endl;
			}
		}
		else if(num.size() == 3)
		{
			if( num[0] == 3 || num[1] == 3 || num[2] == 3)
			{
				cout << "three card" << endl;
			}

			else if( num[0] == 2 && num[1] == 2 || num[0] == 2 && num[2] == 2 || num[1] == 2 && num[2] == 2)
			{
				cout << "two pair" << endl;
			}
		}
		else if(num.size() == 4)
		{
			cout << "one pair" << endl;
		}
		else if(num.size() == 5)
		{
			cout << "null" << endl;
		}
	}
}