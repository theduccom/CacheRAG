#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main(){

	char buf[201];
	fgets(buf,201,stdin);
	for(int i=0;buf[i]!='\0';i++){
		if(buf[i] >= 97 && buf[i] <=122){
			buf[i] -= 32;
		}
	}

	printf("%s",buf);
    return 0;
}