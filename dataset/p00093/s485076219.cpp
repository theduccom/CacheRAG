#include <cstdio>
using namespace std; 

int main()
{
	int a, b;
	bool x = true, y = false;
	
	while (1){
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0){
			break;
		}
		if (y){
			printf("\n");
		}
		y = true;
		
		for (int i = a; i <= b; i++){
			if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0){
				printf("%d\n", i);
				x = false;
			}
		}
		if (x == true){
			printf("NA\n");
		}
		x = true;
	}
	
	return (0);
}