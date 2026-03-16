 #include <stdio.h>
 #include <string.h>
   int main() { 
    char befor[8] = "Hoshino";
     char in[1001],*torget; 
    int n;
    scanf("%d\n",&n);
     for(int i = 0; i < n; i++){
         gets(in);
         while( (torget = strstr(in,befor)) != NULL){     
torget += 6;
             *torget = 'a';
         }         printf("%s\n",in);
     }         
return 0; 
} 