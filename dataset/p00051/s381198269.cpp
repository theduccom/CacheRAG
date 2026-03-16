#include <iostream>
#include <algorithm>
#include <functional>
#include <stdlib.h>

using namespace std;

int main(int argc, char **argv)
{
	int n, tmp, tmp2;
	char *c;
	
	cin >> n;
	for(int i = 0; i < n; i++){
		c = (char *)calloc(8, sizeof(char));
		cin >> c[0] >> c[1] >> c[2] >> c[3] >> c[4] >> c[5] >> c[6] >> c[7];

		sort(c, c+8);
		tmp = atoi(c);
		sort(c, c+8, greater<char>());		
		tmp2 = atoi(c);
		
		cout << (tmp2-tmp) << endl;
		
		free(c);
	}
	
	return 0;
}