#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<vector>
#include<map>
using namespace std;

int main(){
   int n,i,j;
   int hyo[20][20];
   
   for(;;){
      cin>>n;
      if(n==0) break;
      
      memset(hyo,0,sizeof(hyo));
      
      for(i=0;i<n;i++){
         for(j=0;j<n;j++){
            cin>>hyo[i][j];
         }
      }
      //ツ可。ツづーツ堕ォツつキ
      for(i=0;i<n;i++){
         for(j=0;j<n;j++){
            hyo[i][n] += hyo[i][j];
         }
      }
      //ツ縦ツづーツ堕ォツつキ
      for(j=0;j<n+1;j++){
         for(i=0;i<n;i++){
            hyo[n][j] += hyo[i][j];
         }
      }
      
      for(i=0;i<n+1;i++){
         for(j=0;j<n+1;j++){
            printf("%5d",hyo[i][j]);
         }
         puts("");
      }
   }
   return 0;
}