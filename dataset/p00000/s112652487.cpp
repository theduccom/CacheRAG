#include <cstdio>


int main()
{
	for (int x = 1; x <= 9; ++x) {
		for (int y = 1; y <= 9; ++y) {
			std::printf("%dx%d=%d\n", x, y, x * y);
		}
	}

	return 0;
}