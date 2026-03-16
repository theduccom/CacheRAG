#include <cstdio>
#include <cstring>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
	static char str[100000];
	scanf("%[a-z .]",str);
	for(int i = 0; str[i]; i++) {
		if('a' <= str[i] && str[i] <= 'z') str[i]+='A'-'a';
	}
	printf("%s\n",str);
	return 0;
}