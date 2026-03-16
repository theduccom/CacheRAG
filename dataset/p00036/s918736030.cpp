#include <iostream>
#include <string>

using namespace std;

string func(char a[10][10], int s, int t)
{
	if(s+1 < 8 && t+1 < 8){
		if(a[s][t+1]=='1' && a[s+1][t+1]=='1' && a[s+1][t]=='1'){
			return "A";
		}
	}
	if(s+3 < 8){
		if(a[s+1][t]=='1' && a[s+2][t]=='1' && a[s+3][t]=='1'){
			return "B";
		}
	}
	if(t+3 < 8){
		if(a[s][t+1]=='1' && a[s][t+2]=='1' && a[s][t+3]=='1'){
			return "C";
		}
	}
	if(s+2 < 8 && t-1 >= 0){
		if(a[s+1][t]=='1' && a[s+1][t-1]=='1' && a[s+2][t-1]=='1'){
			return "D";
		}
	}
	if(s+1 < 8 && t+2 < 8){
		if(a[s][t+1]=='1' && a[s+1][t+1]=='1' && a[s+1][t+2]=='1'){
			return "E";
		}
	}
	if(s+2 < 8 && t+1 < 8){
		if(a[s+1][t]=='1' && a[s+1][t+1]=='1' && a[s+2][t+1]=='1'){
			return "F";
		}
	}
	
	return "G";
}

int main()
{
	char a[10][10];
	
	while(cin >> a[0]){
		for(int i = 1; i < 8; i++){
			cin >> a[i];
		}
		bool f = false;
		for(int i = 0; i < 8; i++){
			for(int j = 0; j < 8; j++){
				if(a[i][j] == '1'){
					cout << func(a, i, j) << endl;
					f = true;
					break;
				}
			}
			if(f){
				break;
			}
		}
	}
	
	return 0;
}