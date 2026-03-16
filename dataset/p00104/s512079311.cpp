#include <iostream>
#include <cstring>

char board[100][100];
bool hasArrived[100][100];

int main() {
	int h, w;
	while (std::cin >> h >> w, h + w != 0) {
		for (int y = 0; y < h; ++y)
			for (int x = 0; x < w; ++x)
				std::cin >> board[x][y];

		int px = 0, py = 0;
		while (true) {
			if (hasArrived[px][py]) {
				std::cout << "LOOP" << std::endl;
				break;
			}

			hasArrived[px][py] = true;

			if (board[px][py] == '.') {
				std::cout << px << " " << py << std::endl;
				break;
			}
			
			if (board[px][py] == '>')
				++px;
			else if (board[px][py] == '<')
				--px;
			else if (board[px][py] == 'v')
				++py;
			else if (board[px][py] == '^')
				--py;
		}

		std::memset(board, 0, sizeof(board));
		std::memset(hasArrived, 0, sizeof(hasArrived));
	}
}