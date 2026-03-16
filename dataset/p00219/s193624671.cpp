#include <stdio.h>

void graph(int n){ /*nÔÚÌíÞÌACXª¢­Â é©ð\¦·éOt */
	int i;
	if (n != 0){  /*àµAACXª1ÂÅàê½Èç*/
		for (i = 0; i < n; i++) {
			printf("*");
		}
		printf("\n");
	}
	else{ /*»¤ÅÈ¯êÎ */
		printf("-\n");
	}
}

int main(void)
{
	int i;
	int j;
	int n; /*ACXÌ */
	int bice; /*N©ªÁ½ACX*/
	int ice[10]; /*ACXÌíÞ*/
	
	scanf("%d", &n);
	
	while(n != 0){
		/*for¶Ì(i = 0;c;i++);ÌcÌªÉÓ. 10ÈÌ©AACXÌÈÌ©ðµÁ©è©Éßæ¤!*/
		for (i = 0; i < 10; i++){ /*ice[ÈñÆ©]Ìú»*/
			ice[i] = 0;
		}
		for (i = 0; i < n; i++) { /*»ê¼êÌÁ½ACXÌíÞÌm©ß*/
			scanf("%d", &bice);
			ice[bice]++;
		}
		for(i = 0; i < 10; i++){
			graph(ice[i]);
		}
		
		scanf("%d", &n);
	}
	
	return (0);
}