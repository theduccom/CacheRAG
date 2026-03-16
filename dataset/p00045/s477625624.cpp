#include <cstdio>
using namespace std;

int main(){
	int sum, count;
	int val, cou, n;
	
	sum = 0; count = 0; n = 0;
	while((scanf("%d,%d", &val, &cou)) != EOF){
		sum += val * cou;
		count += cou;
		n++;
	}
	
	printf("%d\n%d\n", sum, (count + n - 1) / n);
	
	return 0;
}