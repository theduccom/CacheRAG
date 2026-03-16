#include<iostream>
#include<stdio.h>
using namespace std;

void change(char cup[3], int ball[3]){
	char enter;
	int num;
	if(cup[0] > cup[2]){
		enter = cup[2];
		cup[2] = cup[0];
		cup[0] = enter;
	}
	num =  ball[ cup[0] - 'A' ];
	ball[ cup[0] - 'A' ] = ball[ cup[2] - 'A'];
	ball[ cup[2] - 'A'] = num;
}

int main(){
	char cup[3];
	int ball[3] = {1, 0, 0};
	int i;

	while(cin >> cup)
		change(cup, ball);
	for(i = 0; i < 3; i++){
		if(ball[i] == 1)
			printf("%c\n",'A' + i);
	}
}