#include<stdio.h>
#include<string.h>

int main(){
  typedef struct {
    char s[31];
    int a;
  } book;
  
  book b[100];
  int i=0;
  while(scanf("%s %d", b[i].s, &b[i].a) != EOF){
    i++;
  }
  
  int j,k;
  for(j=0;j<i-1;j++){
    for(k=0;k<i-1;k++){
      if(strcmp(b[k].s, b[k+1].s)>0)
	{int p;char q[31];
	  p=b[k].a;b[k].a=b[k+1].a;b[k+1].a=p;
	  strcpy(q,b[k].s);strcpy(b[k].s,b[k+1].s);strcpy(b[k+1].s,q);
	}
    }
  }


  for(j=0;j<i-1;j++){
    for(k=0;k<i-1;k++){
      if(strcmp(b[k].s, b[k+1].s)==0){
	if(b[k].a > b[k+1].a){
	  int p;
	  p=b[k].a;b[k].a=b[k+1].a;b[k+1].a=p;
	}
      }
    }
  }

  printf("%s\n%d", b[0].s, b[0].a);
  for(j=1;j<i;j++){
    if(strcmp(b[j].s, b[j-1].s) != 0){
      printf("\n");
      printf("%s\n%d", b[j].s, b[j].a);
    }
    else{
      printf(" %d", b[j].a);
    }
  }
  printf("\n");

  return 0;
}