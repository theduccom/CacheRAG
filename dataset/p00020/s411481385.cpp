#include <cstdio>

bool is_alphabet(char data) {
	if ('a' <= data && data <= 'z') {
		return true;
	}
	return false;
}

int main(int argc, char *argv[]) {
	char msg[1000];
	fgets(msg, 500, stdin);
	for (int i = 0; i < 500; i++) {
		if (is_alphabet(msg[i])) {
			msg[i] -= 32;
		}
		if (msg[i] == '\0') {
			break;
		}
	}
	printf("%s", msg);
	
	return 0;
}