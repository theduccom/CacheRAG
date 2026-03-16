#include <stdio.h>
#include <cmath>
#include <algorithm>

using namespace std;



int main(){

	char buf[30];
	int n,sum,runner_num,out_count;

	scanf("%d",&n);

	for(int i=0; i < n; i++){

		sum = 0,runner_num = 0,out_count=0;

		while(out_count < 3){
			scanf("%s",buf);

			switch(buf[1]){
			case 'I':
				runner_num++;
				if(runner_num == 4){
					sum += 1;
					runner_num = 3;
				}
				break;
			case 'O':
				sum += runner_num + 1;
				runner_num = 0;
				break;
			case 'U':
				out_count++;
				break;
			}
		}
		printf("%d\n",sum);
	}
    return 0;
}