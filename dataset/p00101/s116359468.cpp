#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
	int n;
	char str[1024];

	scanf("%d ", &n);

	for (int i = 0; i < n; i++){
		fgets(str, sizeof(str), stdin);

		int len = strlen(str);
		for (int j = 0; j < len - 6; j++){
			if (strncmp(&str[j], "Hoshino", 7) == 0){
				str[j + 6] = 'a';
			}
		}

		cout << str;
	}

	return (0);
}