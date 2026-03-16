#include <stdio.h>
#include <algorithm>
using namespace std;

int main(void)
{
	char num[9];
	int array[8];
	int n;
	int i;
	int j;
	int array2[8];
	int num_max;
	int num_min;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++){
		num_max = 0;
		num_min = 0;
		scanf("%s", num);
		for (j = 0; j < 8; j++){
			array[j] = num[j] - '0';
		}
		sort(array, array + 8);
		for (j = 0; j < 8; j++){
			array2[j] = array[j];
		}
		reverse(array, array + 8);
		for (j = 0; j < 8; j++){
			num_max = num_max * 10 + array[j];
			num_min = num_min * 10 + array2[j];
		}
		num_max -= num_min;
		
		printf("%d\n", num_max);
	}
	
	return 0;
}