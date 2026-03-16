#include <cstdio>
#include <algorithm>
#include <map>
using namespace std;
int main(int argc, char *argv[]) {
	map<char, bool> cups;
	cups.insert(make_pair('A', true));
	cups.insert(make_pair('B', false));
	cups.insert(make_pair('C', false));
	char c1, c2;
	while (EOF != scanf("%c,%c", &c1, &c2)) {
		swap(cups[c1], cups[c2]);
		//printf("%c %c\n", c1, c2);
	}
	map<char, bool>::iterator it = cups.begin();
	while (it != cups.end()) {
		if (it->second) {
			printf("%c\n", it->first);
			break;
		}
		it++;
	}
	return 0;
}