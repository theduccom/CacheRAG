#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <map>
#include <cstdio>
#include <utility>

using namespace std;
typedef pair<double,double> P;




int main(){
	int field[8][8];
	string field1[8];
	
	while(cin >> field1[0]){
		for(int i = 1;i < 8;i++){
			cin >> field1[i];
		}
		for(int i = 0;i < 8;i++){
			for(int j = 0;j < 8;j++){
				if(field1[i][j] == '1') field[i][j] = 1;
				else field[i][j] = 0;
			}
		}
		/*for(int i = 0;i < 8;i++){
			for(int j = 0;j < 8;j++){
				cout << field[i][j];
			}
			cout << endl;
		}
		cout << endl;*/
		int n,k,flag = 0;
		for(n = 0;n < 8;n++){
			for(k = 0;k < 8;k++){
				if(field[n][k] == 1){
					flag = 1;
					break;
				}
			}
			if(flag == 1) break;
		}	

		if(field[n][k] == field[n][k+1]){
			if(field[n][k+1] == field[n][k+2]) cout << "C" << endl;
			else if(field[n][k+1] == field[n+1][k+1]){
				if(field[n+1][k] == field[n+1][k+1]) cout << "A" << endl;
				else if(field[n+1][k+1] == field[n+1][k+2]) cout << "E" << endl;
			}
			else if(field[n][k+1] == field[n+1][k]) cout << "G" << endl;
		}
		else if(field[n][k] == field[n+1][k]){
			if(field[n+1][k] == field[n+2][k]) cout << "B" << endl;
			else if(field[n+1][k] == field[n+1][k-1]) cout << "D" << endl;
			else if(field[n+1][k] == field[n+1][k+1]) cout << "F" << endl;
		}

	}

	return 0;
}