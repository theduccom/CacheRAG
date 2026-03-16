#include<iostream>
#include<string>
int mem[14][14] = {}, i = 0, X[50], Y[50], S[50], flag = 0, max = 0, x, y, s;
int main() {
	char b;
	while (std::cin >> x >> b >> y >> b >> s) {
		Y[i] = y, S[i] = s, X[i] = x;
		i += 1;
	}
		for (int a = 0; a < i; a += 1) {
			if (S[a] >= 1) {
				mem[X[a] + 2][Y[a] + 2] += 1;
				mem[X[a] + 1][Y[a] + 2] += 1;
				mem[X[a] + 3][Y[a] + 2] += 1;
				mem[X[a] + 2][Y[a] + 1] += 1;
				mem[X[a] + 2][Y[a] + 3] += 1;
			}
			if (S[a] >= 2) {
				mem[X[a] + 1][Y[a] + 1] += 1;
				mem[X[a] + 1][Y[a] + 3] += 1;
				mem[X[a] + 3][Y[a] + 1] += 1;
				mem[X[a] + 3][Y[a] + 3] += 1;
			}
			if (S[a] >= 3) {
				mem[X[a]][Y[a] + 2] += 1;
				mem[X[a] + 4][Y[a] + 2] += 1;
				mem[X[a] + 2][Y[a] + 4] += 1;
				mem[X[a] + 2][Y[a]] += 1;
			}
		}
		for (int i = 0; i < 10; i += 1)
			for (int j = 0; j < 10; j += 1) {
				if (0 == mem[i + 2][j + 2])
					flag += 1;
				if (max < mem[i + 2][j + 2])
					max = mem[i + 2][j + 2];
			}
		std::cout << flag << std::endl;
		std::cout << max << std::endl;
	return 0;
}