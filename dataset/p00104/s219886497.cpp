#include <iostream>
#include <string>
#include <vector>
using namespace std;

int x, y, d, HW, H, W;
string input[100];
bool orLoop[100][100];

bool loop(int a, int b){
	if(orLoop[b][a]){
		return true;
	}
	char i = input[b][a];
	if(i=='>'){
		orLoop[b][a] = true;
		if(loop(a + 1, b)){
			return true;
		}
		else
			return false;
	}
	else if(i=='v'){
		orLoop[b][a] = true;
		if(loop(a, b + 1)){
			return true;
		}
		else
			return false;
	}
	else if(i=='<'){
		orLoop[b][a] = true;
		if(loop(a - 1, b)){
			return true;
		}
		else
			return false;
	}
	else if(i=='^'){
		orLoop[b][a] = true;
		if(loop(a, b - 1)){
			return true;
		}
		else
			return false;
	}
	else{
		x = a;
		y = b;
		return false;
	}
}

int main(){
	while(cin >> H >> W){
		if (H == 0 && W == 0) { break; }
		else { HW = H*W + 2; }

		for (int i = 0; i < 100;i++){
			for (int j = 0; j < 100;j++){
				orLoop[i][j] = false;
			}
		}
			for (int i = 0; i < H; i++)
			{
				cin >> input[i];
			}
		if(loop(0, 0)){
			cout << "LOOP" << endl;
		}
		else{
			cout << x << " " << y << endl;
		}
	}
	return 0;
}