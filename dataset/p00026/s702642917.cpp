#include <cstdio>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
	vector<vector<int> > cell_list(10, vector<int>(10, 0));
	const int small_x[4] = {0, 1, 0, -1};
	const int small_y[4] = {-1, 0, 1, 0};
	const int middle_x[4] = {1, 1, -1, -1};
	const int middle_y[4] = {-1, 1, 1, -1};
	const int large_x[4] = {0, 2, 0, -2};
	const int large_y[4] = {2, 0, -2, 0};
	
	while (true) {
		int x, y, size;
		if (EOF == fscanf(stdin, "%d,%d,%d\n", &x, &y, &size)) {
			break;
		}
		// center
		if (x >= 0 && x < 10 && y >= 0 && y < 10) {
			cell_list[y][x]++;
		}
		// small
		for (int i = 0; i < 4; i++) {
			if (x+small_x[i] >= 0 && y+small_y[i] >= 0 &&
				x+small_x[i] < 10 && y+small_y[i] < 10) {
				cell_list[y+small_y[i]][x+small_x[i]]++;
			}
		}
		// middle
		if (size > 1) {
			for (int i = 0; i < 4; i++) {
				if (x+middle_x[i] >= 0 && y+middle_y[i] >= 0 &&
					x+middle_x[i] < 10 && y+middle_y[i] < 10) {
					cell_list[y+middle_y[i]][x+middle_x[i]]++;
				}
			}
			// large
			if (size > 2) {
				for (int i = 0; i < 4; i++) {
					if (x+large_x[i] >= 0 && y+large_y[i] >= 0 &&
						x+large_x[i] < 10 && y+large_y[i] < 10) {
						cell_list[y+large_y[i]][x+large_x[i]]++;
					}
				}
			}
		}
	}
	
	// calc empty cell and max
	int sum_empty = 0, max = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (cell_list[i][j] == 0) sum_empty++;
			if (cell_list[i][j] > max) max = cell_list[i][j];
		}
	}
	
	// print result
	printf("%d\n%d\n", sum_empty, max);
	return 0;
}