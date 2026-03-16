#include <stdio.h>
#include <string.h>
char a[82];
char b[82];
char s[82];
int main()
{
  int n,i,j,c,d;
  scanf("%d",&n);
  while(n>0){
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(s,0,sizeof(s));
    scanf("%s\n%s",&a,&b);
    i=strlen(a)-1;
    j=strlen(b)-1;
    c=0;
    d=0;
    while(i>=0 || j>=0) {
      if(i>=0 && j>=0){
	s[d++] = (((a[i]-'0')+(b[j]-'0')+c) % 10)+'0';
	c = ((a[i]-'0')+(b[j]-'0')+c) / 10;
	i--;j--;
      }else if(i>=0){
	s[d++] = (((a[i]-'0')+c) % 10)+'0';
	c = ((a[i]-'0')+c) / 10;
	i--;
      }else if(j>=0){
	s[d++] = (((b[j]-'0')+c) % 10)+'0';
	c = ((b[j]-'0')+c) / 10;
	j--;
      }
    }
    if(c!=0) s[d++] = c+'0';
    if(d>80) printf("overflow");
    else {
      for(d--;d>=0;d--){
	printf("%c",s[d]);
      }
    }
    printf("\n");
    n--;
  }
  return 0;
}