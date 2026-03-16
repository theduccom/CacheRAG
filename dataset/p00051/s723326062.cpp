#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
	int i,j,n,num[8],Min = 0,Max = 0,ten;
	scanf("%d",&n);
	for(i = 0;i < n;i++){
		Min = 0;
		Max = 0;
		ten = 1;
		scanf("%d",&num[0]);
		for(j = 7;j >= 0;j--){
			num[j] = num[0] / ten % 10;
			ten *= 10;
		}
		ten = 1;
		sort(num,num + 8);
		for(j = 7;j >= 0;j--) {
			Min += num[j] * ten;
			ten *= 10;
		}
		ten = 1;
		reverse(num,num + 8);
		for(j = 7;j >= 0;j--) {
			Max += num[j] * ten;
			ten *= 10;
		}
		printf("%d\n",Max - Min);
	}
	return 0;
}