#include <iostream>
#include <string>


int n;
std::string str;


std::string substg(int a, int b) {
	std::string res = "";
	for (int i = a; i < a + b; i++) {
		res += str[i];
	}

	return res;
}

void replace(int a) {
	std::string hoge = "Hoshina";

	for (int i = a; i < a + 7; i++) {
		str[i] = hoge[i - a];
	}
}

void solve() {
	int i = 0;
	while (i <= (signed)(str.size() - 7)) {
		if (substg(i, 7) == "Hoshino") {
			replace(i);
			i += 7;

			continue;
		}

		i++;
	}

	std::cout << str << std::endl;
}




int main() {
	std::cin >> n;

	std::cin.ignore();

	for (; n > 0; n--) {
		std::getline(std::cin, str);

		solve();
	}

	return 0;
}
