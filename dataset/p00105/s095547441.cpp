#include <stdio.h>
#include <string.h>
#include <algorithm>

char voc[105][50], str[50];
int  page[105][105];

using namespace std;

int main(void)
{
	int n, i, j, k, c, ii;
	
	i = 0;
	while (scanf("%s %d", str, &n) != EOF){
		
		c = 0;
		
		for (j = 0; j < i; j++){
			if (strcmp(str, voc[j]) == 0){
				
				k = 0;
				while (page[j][k] != 0){
					k++;
				}
				page[j][k] = n;
				c = 1;
			}
		}
		
		if (c == 0){
			strcpy(voc[i], str);
			page[i][0] = n;
			i++;
		}
	}
	
	for (j = 0; j < i; j++){
		for (k = 0; k < i - j - 1; k++){
			
			if (strcmp(voc[k], voc[k + 1]) > 0){
				strcpy(str, voc[k]);
				strcpy(voc[k], voc[k + 1]);
				strcpy(voc[k + 1], str);
				
				ii = 0;
				while (page[k][ii] != 0 || page[k + 1][ii] != 0){
					page[k][ii] += page[k + 1][ii];
					page[k + 1][ii] = page[k][ii] - page[k + 1][ii];
					page[k][ii] -= page[k + 1][ii];
					
					ii++;
				}
			}
		}
	}
	
	for (j = 0;j < i; j++){
		k = 0;
		while (page[j][k] != 0){
			k++;
		}
		sort(&page[j][0], &page[j][0] + k);
	}
	
	for (j = 0; j < i; j++){
		printf("%s\n", voc[j]);
		k = 0;
		
		while (1){
			printf("%d", page[j][k]);
			k++;
			
			if (page[j][k] == 0){
				break;
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	return (0);
}
		