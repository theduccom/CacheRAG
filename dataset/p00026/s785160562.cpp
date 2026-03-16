#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
#define FOR(i, s, e) for(int i = s; i < e; ++i)
#define GRID_SIZE 10
struct Grid
{
	Grid() : maxDeep(0){
		FOR(i, 0, GRID_SIZE){
			FOR(j, 0, GRID_SIZE)
				d[i][j] = 0;
		}
		emptyCount = GRID_SIZE*GRID_SIZE;
	}
	void addInk(int i, int j){
		if (i < 0 || GRID_SIZE <= i || j < 0 || GRID_SIZE <= j)
			return;
		if (d[i][j] == 0) --emptyCount;
		++d[i][j];
		if (d[i][j] > maxDeep) maxDeep = d[i][j];
	}
	void dropS(int i, int j){
		addInk(i, j);
		addInk(i - 1, j);
		addInk(i + 1, j);
		addInk(i, j - 1);
		addInk(i, j + 1);
	}
	void dropM(int i, int j){
		dropS(i, j);
		addInk(i - 1, j - 1);
		addInk(i - 1, j + 1);
		addInk(i + 1, j - 1);
		addInk(i + 1, j + 1);
	}
	void dropL(int i, int j){
		dropM(i, j);
		addInk(i, j - 2);
		addInk(i, j + 2);
		addInk(i - 2, j);
		addInk(i + 2, j);
	}
	void drop(int i, int j, int s){
		if (s == 1) dropS(i, j);
		else if (s == 2) dropM(i, j);
		else if (s == 3) dropL(i, j);
	}
	int emptyCount;
	int maxDeep;
	int d[GRID_SIZE][GRID_SIZE];
};
void getValue(string& line, int& i, int& j, int& s){
	string::size_type p1 = line.find(',');
	string::size_type p2 = line.find(',', p1 + 1);
	i = atoi(line.substr(0, p1).c_str());
	j = atoi(line.substr(p1 + 1, p2 - p1 - 1).c_str());
	s = atoi(line.substr(p2 + 1).c_str());
}
int main()
{
	Grid grid;
	string line;
	int i, j, s;
	while (cin >> line){
		getValue(line, i, j, s);
		grid.drop(i, j, s);
	}
	cout << grid.emptyCount << "\n" << grid.maxDeep << "\n";
	return 0;
}