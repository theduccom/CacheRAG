#include<cstdio>
using namespace std;
int main(){
  int h,w;
  char c[101][101];
  scanf("%d %d",&h,&w);
  while(h != 0 && w != 0){
    for(int i=0;i<h;i++){
      scanf("%s",c[i]);
    }
    int x=0,y=0;
    while(c[y][x] != '.'){
      
      if(c[y][x] == '0'){
	printf("LOOP\n");
	break;
      }else if(c[y][x] == '>'){
	c[y][x] = '0';
	x++;
      }else if(c[y][x] == '<'){
	c[y][x] = '0';
	x--;
      }else if(c[y][x] == '^'){
	c[y][x] = '0';
	y--;
      }else if(c[y][x] == 'v'){
	c[y][x] = '0';
	y++;
      }
    }
    if(c[y][x] != '0') printf("%d %d\n",x,y);
    scanf("%d %d",&h,&w);
  }
  return (0);
}