#include<cstdio>
#include<iostream>
#include<string.h>
using namespace std;

main(){
  int nosense;
  char type[3];
  int A=0,B=0,AB=0,O=0;
  while(scanf("%d,%2s",&nosense,type)!=EOF){
    
    if(strcmp(type,"A")==0)A++;//'A'ツづつオツづ按つ「ツづヲツつ、ツづ可陳債暗督！ツ！ツ！
    else if(strcmp(type,"B")==0)B++;
    else if(strcmp(type,"O")==0)O++;
    else AB++;
  } 
  cout << A << endl<<B<<endl<<AB<<endl<<O<<endl;

  return 0;
}