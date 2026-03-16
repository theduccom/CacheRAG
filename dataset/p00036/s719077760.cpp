#include <iostream>
using namespace std;

int main(){
	char a[8][8];
	while(cin >> a[0][0] >> a[0][1] >> a[0][2] >> a[0][3] >> a[0][4] >> a[0][5] >> a[0][6] >> a[0][7]){
		int p, q;
		for(int i = 1; i < 8; i++){
			for(int j = 0; j < 8; j++){
				cin >> a[i][j];
			}
		}
		for(int i = 0; i < 8; i++){
			for(int j = 0; j < 8; j++){
				if(a[i][j] == '1'){
					p = i;
					q = j;
					goto LABEL;
				}
			}
		}
		LABEL:
		if(a[p][q+2] == '1'){
			cout << "C" << endl;
		}
		else if(a[p+2][q] == '1'){
			cout << "B" << endl;
		}
		else if(a[p+2][q+1] == '1'){
			cout << "F" << endl;
		}
		else if(a[p+1][q+2] == '1'){
			cout << "E" << endl;
		}
		else if(a[p+1][q+1] == '1'){
			cout << "A" << endl;
		}
		else if(a[p][q+1] == '1'){
			cout << "G" << endl;
		}
		else{
			cout << "D" << endl;
		}
	}
}