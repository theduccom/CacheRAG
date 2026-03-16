#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *map;
	bool *mapb;
	int x,y;
 
	while(1){
		scanf("%d %d",&y,&x);
		if(y==0 || x==0)
			return 0;

		map =(char*)malloc(x*y*sizeof(char));
		mapb = (bool*)malloc(x*y*sizeof(bool));

		for(int i=0;i<y;i++){
			char *buf;
			buf = (char*)malloc(x+1);
			scanf("%s",buf);
			memcpy(&map[x*i],buf,x);
			free(buf);
		}

		int posx=0,posy=0;
		memset(mapb,0,x*y);

		while(map[posy*x+posx]!='.'){
			mapb[posy*x+posx] = 1;   
			switch(map[posy*x+posx]){
  		case '>':
        posx++;
        break;
  		case '<':
        posx--;
        break;
  		case 'v':
        posy++;
        break;
  		case '^':
        posy--;
        break;
			}
			if(mapb[posy*x+posx]==1){
				// passed twice
				printf("LOOP\n");
        posx=-1;
        break;
			}
		}
		if(posx!=-1)
			printf("%d %d\n",posx,posy);
    free(map);
    free(mapb);
	}

	return 0;
}