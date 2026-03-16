#include <cstdio>
#include <algorithm>
#include <functional>
using namespace std;

int main(void)
{
	int array[8];
	char str[9];
	int n;
	
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		long long a = 0, b = 0, sa;
		scanf("%s", str);
		for (int i = 0; i < 8; i++){
			array[i] = str[i] - '0';
		}
		sort(array, array + 8, greater<int>() );
		for (int i = 0; i < 8; i++){
			a *= 10;
			a += array[i];
		}
		sort(array, array + 8);
		for (int i = 0; i < 8; i++){
			b *= 10;
			b += array[i];
		}
		sa = a - b;
		printf("%lld\n", sa);
	}
	
	return (0);
}