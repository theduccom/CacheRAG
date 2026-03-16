#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char str[200], pal[200];
	int j, ans;

	while (cin >> str){
		j = 0;
		for (int i = strlen(str) - 1; i >= 0; i--){
			pal[j] = str[i];
			j++;
		}
		pal[j] = '\0';
		if (strcmp(pal, str) == 0) ans++;
		
	}
	cout << ans << endl;
	return(0);
}