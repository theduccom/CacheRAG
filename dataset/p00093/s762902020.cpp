#include <cstdio>
using namespace std;

int main()
{
	int a, b;
	bool first = false;

	while (scanf("%d%d", &a, &b), a){
		if (first){
			printf("\n");
		}

		first = true;

		bool check = true;
		for (int i = a; i <= b; i++){
			if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0)){
				printf("%d\n", i);
				check = false;
			}
		}

		if (check){
			printf("NA\n");
		}
	}

	return (0);
}