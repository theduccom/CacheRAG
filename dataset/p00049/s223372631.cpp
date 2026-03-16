#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
	char blo[2];
	int n;
	int num[4] = {0};
	int i;
	
	while (scanf("%d,%s", &n, blo) != EOF){
		if (strcmp(blo, "A") == 0){
			num[0]++;
		}
		else if (strcmp(blo, "B") == 0){
			num[1]++;
		}
		else if (strcmp(blo, "AB") == 0){
			num[2]++;
		}
		else if (strcmp(blo, "O") == 0){
			num[3]++;
		}
	}
	
	for (i = 0; i < 4; i++){
		printf("%d\n", num[i]);
	}
	
	return (0);
}