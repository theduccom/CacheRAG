#include <iostream>
#include <cstdio>
#include <complex>

const int pattern_count = 7;
const int width = 8;
const int height = 8;

int pattern[pattern_count][3][2] = {
	{{1,0},{0,1},{1,1}},	// A
	{{0,1},{0,2},{0,3}},	// B
	{{1,0},{2,0},{3,0}},	// C
	{{-1,1},{0,1},{-1,2}},	// D
	{{1,0},{1,1},{2,1}},	// E
	{{0,1},{1,1},{1,2}},	// F
	{{1,0},{-1,1},{0,1}}	// G
};

bool read_data(char* cells)
{
	for (int i = 0; i < width * height; ++i) {
		std::cin >> cells[i];
	}
	return std::cin.good();
}

bool cell_marked(const char* cells, int x, int y)
{
	return (0 <= x && x < width && 0 <= y && y < height && cells[y * height + x] == '1');
}

bool matches(const char* cells, int kind)
{
	int first_mark = -1;
	for (int i = 0; i < width * height; ++i) {
		if (cells[i] == '1') {
			first_mark = i;
			break;
		}
	}
	if (first_mark < 0) {
		return false;
	}

	int x0 = first_mark % width;
	int y0 = first_mark / width;
	for (int i = 0; i < 3; ++i) {
		if (!cell_marked(cells, x0 + pattern[kind][i][0], y0 + pattern[kind][i][1])) {
			return false;
		}
	}
	return true;
}

int main()
{
	char cells[width * height + 1] = {};
	while (read_data(cells)) {
		for (int kind = 0; kind < pattern_count; ++kind) {
			if (matches(cells, kind)) {
				std::cout << static_cast<char>('A' + kind) << std::endl;
				break;
			}
		}
	}

	return 0;
}