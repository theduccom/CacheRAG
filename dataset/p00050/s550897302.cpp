#include <cstdio>
#include <cstring>
using namespace std;
int main(){
	int i;
	char str[1000];
	gets(str);
	for(i=0;i<1000;i++){
  if(str[i]=='a' &&str[i+1]=='p' &&str[i+2]=='p' &&str[i+3]=='l' &&str[i+4]=='e'){
	  str[i]='p';str[i+1]='e';str[i+2]='a';str[i+3]='c';str[i+4]='h';
	  continue;
  }
  if(str[i]=='p' &&str[i+1]=='e' &&str[i+2]=='a' &&str[i+3]=='c' &&str[i+4]=='h'){
	  str[i]='a';str[i+1]='p';str[i+2]='p';str[i+3]='l';str[i+4]='e';
  }
	}
	puts(str);
	return 0;
}