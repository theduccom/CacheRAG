#include<iostream>
#include<utility>

using namespace std;

bool inPaper(int x, int y) {
	return x >= 0 && x < 10 && y >= 0 && y < 10;
}

int main() {
	const pair<int, int> small[] = {
		        {0, -1},
		{-1, 0},{0, 0},{1, 0},
		        {0, 1}
	};
	const pair<int, int> medium[] = {
		{-1, -1}, {0, -1}, {1, -1},
		{-1,  0}, {0, 0},  {1,  0},
		{-1,  1}, {0, 1},  {1,  1}
	};
	const pair<int, int> large[] = {
            	   {0, -2},
		{ -1, -1 },{ 0, -1 },{ 1, -1 },
		{ -2, 0 }, { -1,  0 },{ 0, 0 },{ 1,  0 },{ 2, 0 },
		{ -1,  1 },{ 0, 1 },{ 1,  1 },
				   { 0, 2 },
	};

	int paper[10][10] = {};

	while (true) {
		int x, y, size;
		
		cin >> x;
		cin.ignore();
		cin >> y;
		cin.ignore();
		cin >> size;
		if (cin.eof()) {
			break;
		}

		const pair<int, int>* it_begin;
		const pair<int, int>* it_end;
		switch (size)
		{
		case 1:
			it_begin = begin(small);
			it_end = end(small);
			break;
		case 2:
			it_begin = begin(medium);
			it_end = end(medium);
			break;
		case 3:
			it_begin = begin(large);
			it_end = end(large);
			break;
		default:
			break;
		}
		for (auto it = it_begin; it != it_end; ++it) {
			int x2 = x + it->first, y2 = y + it->second;
			if (inPaper(x2, y2)) {
				++paper[x2][y2];
			}
		}
	}
	int zero_count = 0;
	for (auto& a : paper) {
		for (auto& b : a) {
			if (b == 0) {
				++zero_count;
			}
		}
	}
	cout << zero_count << endl;

	int maximum = 0;
	for (auto& a : paper) {
		for (auto& b : a) {
			if (b > maximum) {
				maximum = b;
			}
		}
	}
	cout << maximum << endl;
	return 0;
}