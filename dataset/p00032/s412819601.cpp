#include <iostream>
#include <vector>
#include <string>
#include <sstream>

std::vector<std::string> split(std::string &str, char delim) {
	std::vector<std::string> result;
	std::istringstream is(str);
	std::string buf;
	while (getline(is, buf, delim)) {
		result.push_back(buf);
	}
	return result;
}

bool inputDataSet(std::vector<int> *l) {
	std::string line;
	if (!getline(std::cin, line)) { return false; }
	const std::vector<std::string> tokens(split(line, ','));
	if (tokens.size() != 3) { return false; }
	l->clear();
	for (std::vector<std::string>::const_iterator it = tokens.begin(); it != tokens.end(); ++it) {
		std::istringstream is(*it); int x;
		is >> x;
		l->push_back(x);
	}
	return true;
}

int main() {
	int nr = 0, nl = 0;
	std::vector<int> l(3);
	while (inputDataSet(&l)) {
		if (l[0] * l[0] + l[1] * l[1] == l[2] * l[2]) { ++nr; }
		if (l[0] == l[1]) { ++nl; }
	}
	std::cout << nr << std::endl;
	std::cout << nl << std::endl;
	return 0;
}