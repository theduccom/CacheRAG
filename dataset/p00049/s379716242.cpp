#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int n, ke, kata[4] = {0};

	while (scanf("%d,%s", &n, &ke) != EOF){
		if (ke == 'A') kata[0]++;
		else if (ke == 'B') kata[1]++;
		else if (ke == 'O') kata[3]++;
		else kata[2]++;
	}
	for (int i = 0; i < 4; i++){
		cout << kata[i] << endl;
	}
	return (0);
}