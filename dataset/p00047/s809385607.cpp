#include <stdio.h>

int main(){
	int cup[3] = {1,0,0},tmp;
	char a,b;
	while(scanf("%c,%c",&a,&b) != EOF){
		tmp = cup[a - 'A'];
		cup[a - 'A'] = cup[b - 'A'];
		cup[b - 'A'] = tmp;
	}
	for(tmp = 0;tmp < 3;tmp++){
		if(cup[tmp]) printf("%c\n",tmp + 'A');
	}
	return 0;
}