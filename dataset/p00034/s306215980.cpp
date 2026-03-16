#include <cstdio>
int main(){
	int l[10];
	float v1, v2;
	while(~scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%f,%f",l,l+1,l+2,l+3,l+4,l+5,l+6,l+7,l+8,l+9,&v1,&v2)){

	float distance = 0, goal;
	for(int i=0;i<10;i++)distance+=l[i];
	goal = distance * v1 / (v1+v2);
	
	int a = 0, res;
	for(int i=0;i<10;i++){
		a += l[i];
		if(goal <= a){res = i + 1;break;}
	}
	printf("%d\n", res);
	}
}