#include <stdio.h>
#include <string.h>

int main(void){
	char num[9];
	char max[9];
	char min[9];
	int n;
	int max_v, min_v;
	
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%s", num);
		strcpy(max, num);
		for(int j=7; j>0; j--){
			for(int k=0; k<j; k++){
				if(max[k] < max[k+1]){
					char temp = max[k];
					max[k] = max[k+1];
					max[k+1] = temp;
				}
			}
		}
		sscanf(max, "%d", &max_v);

		strcpy(min, num);
		for(int j=7; j>0; j--){
			for(int k=0; k<j; k++){
				if(min[k] > min[k+1]){
					char temp = min[k];
					min[k] = min[k+1];
					min[k+1] = temp;
				}
			}
		}
		sscanf(min, "%d", &min_v);

		printf("%d\n", max_v-min_v);
	}


	return 0;
}