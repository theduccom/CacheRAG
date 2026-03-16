#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	string str[8];
	int valid;

	while(cin >> str[0]){
		for(int i=1; i<8; i++){
			cin >> str[i];
		}
		
		valid = 0;
		for(int i=0; i<8 && valid == 0; i++){
			for(int j=0; j<8; j++){
				if(str[i][j] == '1'){
					if(i <= 4 && str[i+3][j] == '1'){
						cout << 'B' << endl;
						valid = 1;
						break;
					}
					if(j <= 4 && str[i][j+3] == '1'){
						cout << 'C' << endl;
						valid = 1;
						break;
					}
					if(j != 0 && i <= 5 && str[i+2][j-1] == '1'){
						cout << 'D' << endl;
						valid = 1;
						break;
					}
					if(j <= 5 && i != 7 && str[i+1][j+2] == '1'){
						cout << 'E' << endl;
						valid = 1;
						break;
					}
					if(j != 7 && i <= 5 && str[i+2][j+1] == '1'){
						cout << 'F' << endl;
						valid = 1;
						break;
					}
					if(j != 0 && i != 7 && str[i+1][j-1] == '1'){
						cout << 'G' << endl;
						valid = 1;
						break;
					}
					cout << 'A' << endl;
					valid = 1;
					break;
				}
			}
		}
	}

	return 0;

}