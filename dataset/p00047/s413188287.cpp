#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	int a[3];
	char cang1, cang2;
	a[0] = 1;

	while (scanf("%c,%c", &cang1, &cang2) != EOF){
		for (int i = 0; i < 3; i++){
		 if (cang1 == 'A' + i){
			 for (int j = 0; j < 3; j++){
				 if (cang2 == 'A' + j) swap(a[i], a[j]);
			 }
		 }
		}
	}
	for (int i = 0; i < 3; i++){
		if (a[i] == 1) printf("%c\n", 'A' + i);
	}
	return (0);
}