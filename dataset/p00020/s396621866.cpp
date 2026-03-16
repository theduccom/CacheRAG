#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;

int main(){
   char str[500];
   int i;
   fgets(str,499,stdin);
   
   for(i=0;i<500;i++){
      if(str[i]>=97&&str[i]<=122)
         str[i]-=32;
   }
   printf("%s",str);
   return 0;
}