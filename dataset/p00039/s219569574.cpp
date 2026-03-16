#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	for(;;){
		int f=0,row[100] = {0},i;
		for(i=0;;i++){
			char c;
			if(scanf("%c",&c) == EOF){f = 1;break;}
			if(c == '\n'){break;}
			else if(c == 'I'){row[i] = 1;}
			else if(c == 'V'){row[i] = 5;}
			else if(c == 'X'){row[i] = 10;}
			else if(c == 'L'){row[i] = 50;}
			else if(c == 'C'){row[i] = 100;}
			else if(c == 'D'){row[i] = 500;}
			else if(c == 'M'){row[i] = 1000;}
		}
		row[i+1] = 0;
		if(f == 1){break;}
		int sum = 0;
		for(int j=0; j<i; j++){
			if(row[j]>=row[j+1]){sum+=row[j];}
			else if(row[j]<row[j+1]){sum+=row[j+1]-row[j];j++;}
		}
		cout <<sum<<endl;
	}
}