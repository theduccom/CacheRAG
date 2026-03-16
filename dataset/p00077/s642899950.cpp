#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<vector>
using namespace std;
main(){
  char str[256];
  while(~scanf("%s",str)){
    int N=strlen(str);
    for(int i=0;i<N;i++){
      if(str[i]=='@'){
	i++;
	for(int j=0;j<str[i]-'0';j++){
	  printf("%c",str[i+1]);
	}
	i++;
      }
      else
	printf("%c",str[i]);
    }
    puts("");
  }
}