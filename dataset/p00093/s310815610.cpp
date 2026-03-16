#include <cstdio>

using namespace std;

#define YEAR_MAX 3000

bool reap[YEAR_MAX + 1];

int main()
{
	for (int i = 4; i < YEAR_MAX; i++){
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0){
			reap[i] = true;
		}
	}
	
	int a[10000], b[10000];
	bool flag;
	int num = 0;
	
	while (scanf("%d %d", &a[num], &b[num]), !(a[num] == 0 && b[num] == 0)){
		num++;
	}
	
	for (int j = 0; j < num; j++){
		flag = true;
		for (int i = a[j]; i <= b[j]; i++){
			if(reap[i]){
				printf("%d\n", i);
				flag = false;
			}
		}
		if (flag) printf("NA\n");
		if (j < num - 1) puts("");
	}
}