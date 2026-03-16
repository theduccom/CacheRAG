#include <iostream>
using namespace std;
int main(){
	string s;
	while(cin >> s){
		bool a[10][10] = {0};
		for(int j = 1; j <= 8; j++){
			a[1][j] = s[j-1] - 48;
		}
		for(int i = 2; i <= 8; i++){
			cin >> s;
			for(int j = 1; j <= 8; j++){
				a[i][j] = s[j-1] - 48;
			}
		}
		bool f = true;
		for(int i = 1; i <= 8 && f; i++){
			for(int j = 1; j <= 8; j++){
				if(a[i][j]){
					if(a[i][j+1] && a[i+1][j] && a[i+1][j+1]) cout << "A" << endl;
					else if(a[i+1][j] && a[i+2][j] && a[i+3][j]) cout << "B" << endl;
					else if(a[i][j+1] && a[i][j+2] && a[i][j+3]) cout << "C" << endl;
					else if(a[i+1][j-1] && a[i+1][j] && a[i+2][j-1]) cout << "D" << endl;
					else if(a[i][j+1] && a[i+1][j+1] && a[i+1][j+2]) cout << "E" << endl;
					else if(a[i+1][j] && a[i+1][j+1] && a[i+2][j+1]) cout << "F" << endl;
					else if(a[i][j+1] && a[i+1][j-1] && a[i+1][j]) cout << "G" << endl;
					f = false;
					break;
				}
			}
		}
	}
	return 0;
}