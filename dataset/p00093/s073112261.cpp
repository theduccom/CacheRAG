#include <iostream>
using namespace std;

bool is_uruu(int y){
	if(y % 400 == 0){
		return true;
	}else if(y % 100 == 0){
		return false;
	}else if(y % 4 == 0){
		return true;
	}
	return false;
}

int main(){
	int a, b;
	int n = 0;
	while(cin >> a >> b){
		if(a == 0 && b == 0) break;
		if(n != 0) cout << endl;
		else n++;
		int uru[1000];
		int count = 0;
		for(int i = a; i <= b; i++){
			if(is_uruu(i)){
				uru[count++] = i;
			}
		}
		if(count == 0){
			cout << "NA" << endl;
		} else {
			for(int j = 0; j < count; j++)
				cout << uru[j] << endl;
		}
	}
	return 0;
}