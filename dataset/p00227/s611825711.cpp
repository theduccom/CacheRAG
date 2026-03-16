#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int i, n, m;
	int sum, array[1024];
	
	while (1){		
		scanf("%d %d", &n, &m);
		
		if (!n && !m){
			break;
		}
		
		for (i = 0; i < n; i++){
			scanf("%d", &array[i]);
		}
		
		sort(array, array + n);
		reverse(array, array + n);
		
		for (i = 0, sum = 0; i < n; i++){
			if ((i + 1) % m != 0 || n - (i / m * m) < m){
				sum += array[i];
			}
		}
		
		printf("%d\n", sum);
	}
	
	return (0);
}