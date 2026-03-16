#include <iostream>
using namespace std;
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   int i,j,k,l;
   int a,b,c,d;
   int memory[2];
   char e[1000][102];
   for(i=0; fgets(e[i],105,stdin) != NULL; i++) ;
   memory[0] = i;

   for(i=0;i<memory[0];i++) {
      for(j=0;e[i][j];j++) {
         if(e[i][j] == '@') {
            memory[1] = e[i][++j] - '0';
            ++j;
            for(k=0;k<memory[1];k++) printf("%c",e[i][j]);
         }
         else printf("%c",e[i][j]);
      }
   }

              
   return 0;
}