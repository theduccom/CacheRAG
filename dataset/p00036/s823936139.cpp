#include <iostream>
#include <cctype>
using  namespace std;

int main(){
	char area[8][8];
	char c;
	while(cin >> c){
		while(!isalnum(c)) cin >> c;
		for(int i = 0; i < 8; i++){
			for(int j = 0; j < 8; j++){
				area[i][j] = c;
				if(i ==  7 && j == 7) break;
				cin >> c;
			}
		}
		for(int i = 0; i < 8; i++){
			for(int j = 0; j < 8; j++){
				if(area[i][j] == '1'){
					if(i+1 < 8 && area[i+1][j] == '1'){
						if(i+2 < 8 && area[i+2][j] == '1'){
							if(i+3 < 8 && area[i+3][j] == '1'){
								cout << "B";
							}
						}
						if(j+1 < 8 && area[i+1][j+1] == '1'){
							if(i+2 < 8 && area[i+2][j+1] == '1'){
								cout << "F";
							}
							if(area[i][j+1] == '1'){
								cout << "A";
							}
						}
						if(j+1 < 8 && area[i][j+1] == '1'){
							if(j-1 >= 0 && area[i+1][j-1] == '1'){
								cout << "G";
							}
						}
						if(j+1 < 8 && area[i][j+1] == '1'){
							if(i-1 >= 0 && area[i-1][j+1] == '1'){
								cout << "D";
							}
						}
					}else if(j+1 < 8 && area[i][j+1] == '1'){
						if(j+2 < 8 && area[i][j+2] == '1'){
							if(j+3 < 8 && area[i][j+3] == '1'){
								cout <<"C";
							}
						}
						if(i+1 < 8 && area[i+1][j+1] == '1'){
							if(j+2 < 8 && area[i+1][j+2] == '1'){
								cout << "E";
							}
						}
					}
				}
			}
		}
		cout << endl;
	}
	return 0;
}