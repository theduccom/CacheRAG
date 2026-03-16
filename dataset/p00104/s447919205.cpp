#include<stdio.h>
#include<string.h>

int main(){
  while(1){
    int h, w;
    scanf("%d %d", &h, &w);
    if(h==0 && w==0)
      break;
    else{
      char s[100][100];
      int i;
      for(i=0;i<h;i++){	
	scanf("%s", s[i]);
      }
      int x=0;
      int y=0;
      int xx[10000]={};
      int yy[10000]={};
      int j=0;
      while(1){
	xx[j]=x;
	yy[j]=y;
	j++;
	if(s[x][y] == '>')
	  y++;
	if(s[x][y] == '<')
	  y--;
	if(s[x][y] == '^')
	  x--;
	if(s[x][y] == 'v')
	  x++;	
	if(s[x][y] == '.')
	  {printf("%d %d\n", y, x);break;}
	
	int k;
	int flag=0;
	for(k=0;k<10000;k++){
	  if(xx[k]==x && yy[k]==y){flag++;}
	}
	if(flag!=0)
	  {printf("LOOP\n");break;}
      }
    }
  }
  return 0;
}