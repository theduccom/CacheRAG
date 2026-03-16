#include <stdio.h>
#include <string.h>
#include <ctype.h>

int
main(void)
{
	char line[256];

	if (fgets(line, sizeof line, stdin)) {
		int len = strlen(line);
		for (int i = 0; i < len; i++) {
			if (islower(line[i])) {
				line[i] = toupper(line[i]);
			}
		}
		
		printf("%s", line);
	}

	return 0;
}