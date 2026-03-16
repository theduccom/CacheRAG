#include <stdio.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main(){

	char buf[101],result[1100],ch;
	int p,limit;

	while(scanf("%s",buf)!=EOF){
		p = 0;
		for(int i=0; buf[i] != '\0';){
			if(buf[i] == '@'){
				ch = buf[i+2];
				limit = buf[i+1] - '0';
				for(int k = 0; k < limit; k++){
					result[p++] = ch;
				}
				i += 3;
			}else{
				result[p++] = buf[i];
				i++;
			}
		}
		result[p] = '\0';
		printf("%s\n",result);
	}

	return 0;
}