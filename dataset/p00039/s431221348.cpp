#include<cstdio>
int main(){
  char s[105];
  int sum,i,a[105];
  while(scanf("%s",s)!=EOF){
    sum = 0;
    for(i=0;s[i]!='\0';i++){
      if(s[i] == 'M') a[i] = 1000;
      if(s[i] == 'D') a[i] = 500;
      if(s[i] == 'C') a[i] = 100;
      if(s[i] == 'L') a[i] = 50;
      if(s[i] == 'X') a[i] = 10;
      if(s[i] == 'V') a[i] = 5;
      if(s[i] == 'I') a[i] = 1;
      if(i>0) sum += a[i-1]<a[i]?-a[i-1]:a[i-1];
    }
    printf("%d\n",sum+a[i-1]);
  }
  return(0);
}

