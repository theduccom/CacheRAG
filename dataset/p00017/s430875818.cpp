#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <algorithm>
#include <stdlib.h>

using namespace std;


int main(){
	string line;

	while(getline(cin, line)){
		int flag = 0;

		for(int i=0 ; i<26 ; i++){
			for(int j=0 ; j<line.size() ; j++){
				if(line[j] != ' ' && line[j] != '.'){
					if(line[j] == 'a'){
						line[j] = 'z' ;
					}else{
						line[j]--;
					}
				}
			}

			for(int k=0 ; k<line.size()-2 ; k++){
				if(line[k] == 't' && line[k+1] == 'h'){
					flag = 1;
					cout << line << endl;
					break;
				}
			}
			if(flag == 1) break;
		}
		//cout << line << endl;
	}
	return 0;
}