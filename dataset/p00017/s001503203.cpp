#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
#include <vector>


int main()
{
	char s[81];
	while (fgets(s, 81, stdin) != NULL)
	{
		for (int i = 0; i < 26; ++i)
		{
			char decoded[81];
			for (int j = 0; s[j] != '\0'; ++j)
				decoded[j] = islower(s[j]) ? 'a'+(s[j]-'a'+i)%26 : s[j];
			decoded[strlen(s)-1] = '\0';
			if (strstr(decoded, "the")
				|| strstr(decoded, "this")
				|| strstr(decoded, "that"))
			{
				puts(decoded);
				break;
			}
		}
	}
	return 0;
}