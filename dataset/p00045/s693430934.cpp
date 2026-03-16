#include<bits/stdc++.h>
using namespace std;
int main(){
	int prise, num;
	int total_prise = 0, total_num = 0, total_kinds = 0;
	while(scanf("%d,%d", &prise, &num) != EOF){
		total_kinds++;
		total_prise += (prise * num);
		total_num += num;
	}
	printf("%d\n", total_prise);
	double average_num = (double)total_num / (double)total_kinds;
	if(average_num - floor(average_num) < 0.5) printf("%d\n", (int)floor(average_num));
	else printf("%d\n", (int)ceil(average_num));
	return 0;
}