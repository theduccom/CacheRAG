#include <iostream>
using namespace std;
struct Rect
{
	Rect(){
		minX = minY = 10000;
		maxX = maxY = -10000;
	}
	void add(int i, int j){
		if (minX > i) minX = i;
		if (minY > j) minY = j;
		if (maxX < i) maxX = i;
		if (maxY < j) maxY = j;
	}
	int getWidth() {
		return (maxY - minY + 1);
	}
	int getHeight() {
		return (maxX - minX + 1);
	}
	int minX;
	int minY;
	int maxX;
	int maxY;
};
int main()
{
	char c;
	int A[8][8] = {};
	while (true){
		Rect r;
		for (int i = 0; i < 8; ++i){
			for (int j = 0; j < 8; ++j){
				cin.get(c);
				if (c == '1') A[i][j] = 1;
				else A[i][j] = 0;
				if (1 == A[i][j])
					r.add(i, j);
			}
			cin.get(c);
		}
		int w = r.getWidth();
		int h = r.getHeight();
		if (1 == w) cout << "B\n";
		else if (1 == h) cout << "C\n";
		else if (2 == w && 2 == h) cout << "A\n";
		else if (2 == w && 3 == h){
			if (A[r.minX][r.minY] == 1) cout << "F\n";
			else cout << "D\n";
		}
		else if (3 == w && 2 == h){
			if (A[r.minX][r.minY] == 1) cout << "E\n";
			else cout << "G\n";
		}
		if (!cin.get(c))
			break;
	}
	return 0;
}