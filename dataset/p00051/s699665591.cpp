#include <stdio.h>
#include <math.h>
void swap(int *a,int *b);
int main(){
	int data[8];
	int i,j,n,num,max,min;
	scanf("%d",&n);
	while(n--){
		max=min=0;
		scanf("%d",&num);
		for(i=0;i<8;i++){
			data[i] = num%10;
			num /= 10;
		}
		for(i=0;i<8;i++){
			for(j=i;j<8;j++){
				if(data[j]>data[i]) swap(&data[i],&data[j]);
			}
		}
		for(i=0;i<8;i++){
			max += pow(10.0,7-(double)i)*(data[i]);
			min += pow(10.0,(double)i)*(data[i]);
		}
		printf("%d\n",max-min);

	}
	return 0;
}

void swap(int *a,int *b){
	int t;
	t = *a;
	*a = *b;
	*b = t;
}