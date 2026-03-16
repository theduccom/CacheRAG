#include <stdio.h>
#include <stack>
#include <math.h>

using namespace std;


int main(){

   int height,width,count,limit,row,col;
   char table[100][101];

   while(true){
	   scanf("%d %d",&height,&width);
	   if(height == 0 && width == 0)break;

	   for(int i = 0; i < height; i++){
		   scanf("%s",table[i]);
	   }

	   count = 0;
	   row = 0; col = 0;
	   limit = height*width;

	   while(table[row][col] != '.' && count < limit){
		   switch(table[row][col]){
		   case '>':col++;
		   	   	   count++;
		   	   	   break;
		   case '<':col--;
		   	   	   count++;
		   	   	   break;
		   case '^':row--;
		   	   	   count++;
		   	   	   break;
		   case 'v':row++;
		   	   	   	count++;
		   	   	   	break;
		   }
	   }

	   if(count >= limit){
		   printf("LOOP\n");
	   }else{
		   printf("%d %d\n",col,row);
	   }

   }

    return 0;
}