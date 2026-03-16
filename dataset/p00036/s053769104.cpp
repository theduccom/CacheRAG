#define _USE_MATH_DEFINES
 
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main(){
	string str[8];

	bool x[8][8];
	
	while(cin >> str[0]){
		for(int i=1;i<8;i++){
			cin >> str[i];
		}
		
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				if(str[i][j]=='1'){
					x[i][j]=1;
				}else{
					x[i][j]=0;
				}
			}
		}

		bool flag = 0;
		
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				if(x[i][j]){
					if(!flag && j<5){
						if(x[i][j+1] && x[i][j+2] && x[i][j+3]){
							cout << "C" << endl;
							flag = 1;
						}
					}
					if(!flag && j<7){
						if(x[i][j+1]){
							if(x[i+1][j] && x[i+1][j+1]){
								cout << "A" << endl;
								flag = 1;
							}
							else if(j<6 && x[i+1][j+1] && x[i+1][j+1]){
								cout << "E" << endl;
								flag = 1;
							}
							else if(j>0 && x[i+1][j-1] && x[i+1][j]){
								cout << "G" << endl;
								flag = 1;
							}
						}
					}
					if(!flag && i<6){
						if(x[i+1][j]){
							if(j<7 && x[i+1][j+1] && x[i+2][j+1]){
								cout << "F" << endl;
								flag = 1;
							}
							else if(j>0 && x[i+1][j-1] && x[i+2][j-1]){
								cout << "D" << endl;
								flag = 1;
							}
							else if(i<5 && x[i+2][j] && x[i+3][j]){
								cout << "B" << endl;
								flag = 1;
							}
						}
					}
					if(flag){
						i=10;j=10;
					}
				}
			}
		}
	}
	return 0;
}