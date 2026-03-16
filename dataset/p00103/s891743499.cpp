#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char input[10];
	int loc = 0, all = 0;
	int point = 0;
	int out = 3;
	int e;

	cin >> e;
	while(e != 0){
		cin >> input;
		if( strcmp(input, "HIT") == 0 ){
			loc++;
			if(loc > 3){
				loc--;
				point++;
			}
				
		}else if( strcmp(input, "OUT") == 0){
			out--;
			if(out == 0){
				out = 3;
				e--;
				loc = 0;
				cout << point << endl;
				point = 0;
			}
		}else if( strcmp(input, "HOMERUN") == 0){
			point++;
			point += loc;
			loc = 0;
		}
	}

}