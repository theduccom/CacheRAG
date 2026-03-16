#include <stdio.h>

#define SQ(x) ((x) * (x))
#define MIN(x, y) ((x) < (y) ? (x) : (y))

int main(void)
{
	int len, wid, hite;
	int r;
	int n;
	
	while (1){
		int couch;
		scanf("%d%d%d", &len, &wid, &hite);
		
		if (len == 0){
			break;
		}
		
		couch = MIN(SQ(len) + SQ(wid), MIN(SQ(len) + SQ(hite), SQ(wid) + SQ(hite)));
		
		scanf("%d", &n);
		
		for (int i = 0; i < n; i++){
			scanf("%d", &r);
			
			if (couch < SQ(2 * r)){
				puts("OK");
			}
			else {
				puts("NA");
			}
		}
	}
	
	return (0);
}