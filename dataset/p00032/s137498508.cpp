#include <stdio.h>

#define SQ(x) ((x) * (x))

int main(void)
{
	int a, b, c;
	int t, h;
	char buf[256];
	
	t = h = 0;
	while (fgets(buf, 256, stdin) != NULL){
		sscanf(buf, "%d,%d,%d", &a, &b, &c);
		
		if (SQ(a) + SQ(b) == SQ(c)){
			t++;
		}
		if (a == b){
			h++;
		}
	}
	
	printf("%d\n%d\n", t, h);
	
	return (0);
}