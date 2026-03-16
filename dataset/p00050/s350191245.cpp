#include <cstdio>
#include <string>
#include <iostream>

using namespace std;


int main(){

   char buf[1010];
   fgets(buf,1010,stdin);

   for(int i=0;buf[i] != '\0';i++){
	 if(i >= 4 && buf[i] == 'e' && buf[i-1] == 'l' && buf[i-2] == 'p' &&
			   buf[i-3] == 'p' && buf[i-4] == 'a'){
		   buf[i-4] = 'p';
		   buf[i-3] = 'e';
		   buf[i-2] = 'a';
		   buf[i-1] = 'c';
		   buf[i] = 'h';
	   }else if(i >= 4  && buf[i] == 'h' && buf[i-1] == 'c' && buf[i-2] == 'a' &&
			   buf[i-3] == 'e' && buf[i-4] == 'p'){
		   buf[i-4] = 'a';
		   buf[i-3] = 'p';
		   buf[i-2] = 'p';
		   buf[i-1] = 'l';
		   buf[i] = 'e';
	   }
   }

   printf("%s",buf);

    return 0;
}
