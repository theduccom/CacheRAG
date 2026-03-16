#include <stdio.h>
int main(void) {
	int i;
	int input;
	int mozi;
	int kazu;
	while((input=getchar())!=EOF) {
		if(input!='@')putchar(input);
		else {
			kazu=getchar();
			mozi=getchar();
			for(i='0';i<kazu;i++)putchar(mozi);
		}
	}
	return 0;
}