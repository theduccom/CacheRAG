#include <stdio.h>
#include <algorithm>

using namespace std;

int translate(char ch){
	switch(ch){
	case 'I':	return 1;
	case 'V':	return 5;
	case 'X':	return 10;
	case 'L':	return 50;
	case 'C':	return 100;
	case 'D':	return 500;
	case 'M':	return 1000;
	}
	return -1; //must not reach here
}

int main(){
	char buf[101];
	int sum;
	bool subFLG;

	while(scanf("%s",buf)!=EOF){
		sum = 0;
		subFLG = false;
		for(int i=0;buf[i] != '\0';i++){
			if(buf[i+1] != '\0' && translate(buf[i]) < translate(buf[i+1]) && subFLG == false){
				sum += -1*(translate(buf[i]));
				subFLG = true;
			}else{
				sum += translate(buf[i]);
				subFLG = false;
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}