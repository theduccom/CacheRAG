#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int n, m;
	
	while (scanf("%d %d", &n, &m), n != 0 && m != 0){
		
		int p[1024];
		
		for (int i = 0; i < n; i++){
			scanf("%d", &p[i]);
		}
		
		sort(p, p+n);
		reverse(p, p+n);
		
		for (int i = 0; i < n; i++){
			if ((i + 1) % m == 0){
				p[i] = 0;
			}
		}
		
		int sum = 0;
		for (int i = 0; i < n; i++){
			sum += p[i];
		}
		
		printf("%d\n", sum);
	}
}