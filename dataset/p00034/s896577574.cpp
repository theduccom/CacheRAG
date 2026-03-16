#include <cstdio>
using namespace std;

int main()
{
	int area[10] = {0};
	
	while (scanf("%d", area) != EOF){
		int i;
		int n;
		int v[2];
		int min = *area;
		int sum = *area;
		int current[2];
		int point;
		
		for (i = 1; i < 10; i++){
			scanf(",%d", area + i);
			sum += area[i];
			if (min > area[i]) min = area[i];
		}
		scanf(",%d,%d", v, v + 1);
		for (n = 1; sum * n % (v[0] + v[1]) != 0; n++);
		sum *= n;
		
		for (current[0] = 0, current[1] = sum; current[0] < current[1];){
			current[0] += v[0];
			current[1] -= v[1];
		}
		for (i = point = 0; point < current[0]; i++) point += area[i] * n;
		printf("%d\n", i);
	}
	
	return 0;
}