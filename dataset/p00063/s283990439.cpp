#include <stdio.h>
#include<math.h>
#include <algorithm>
using namespace std;

int main(){
	char buf[101];
	int length,count = 0;
	bool FLG;

	while(scanf("%s",buf)!=EOF){
		length = 0;
		for(int i=0; buf[i] != '\0';i++)length++;
		if(length == 1){
			count++;
			continue;
		}

		FLG = true;
		for(int i = 0; i < length/2; i++){
			if(buf[i] != buf[length-1-i]){
				FLG = false;
				break;
			}
		}
		if(FLG)count++;
	}

	printf("%d\n",count);

    return 0;
}

