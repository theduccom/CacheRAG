#include <cstdio>
#include <cstring>

using namespace std;

int main(void)
{
	char word[10001];
	int n;
	long long sum = 1;

	gets(word);
	n = strlen(word);

	for(int f1 = 0; f1 < n; f1++){
		if('a' <= word[f1] && word[f1] <= 'z')
		{
			word[f1] = word[f1] - ('a' - 'A');
		}
	}

	printf("%s\n", word);
	return 0;
}