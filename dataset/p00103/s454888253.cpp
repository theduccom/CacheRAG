#include <vector>
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		int out = 0;
		int base = 0;
		int score = 0;
		while (out < 3){
			char s[128];
			scanf("%s", s);
			if (s[1] == 'I'){
				if (base == 3) score++;
				else base++;
			}
			else if (s[1] == 'O'){
				score += base + 1;
				base = 0;
			}
			else out++;
		}
		printf("%d\n", score);
	}
}