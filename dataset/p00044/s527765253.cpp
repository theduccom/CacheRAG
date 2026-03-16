#include <iostream>
using namespace std;
#define MAX 500021

int main(){
	bool b[MAX];
	fill(b, b+MAX, false);b[0] = b[1] = true;
	for(int i = 2;i < MAX;i++){
		if(!b[i]){
			for(int j = 2;i*j < MAX;j++){
				b[i*j] = true;
			}
		}
	}
	
	int n, x, y;
	while(cin >> n){
		for(x = n-1;b[x];x--);
		for(y = n+1;b[y];y++);
		cout << x << " " << y << endl;
	}
	return 0;
}
/*
1
y eazqyp pnop pngtg ye obmpngt xmybp mr lygw
*/