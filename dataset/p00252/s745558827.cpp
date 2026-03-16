#include<bits/stdc++.h>
using namespace std;
int main(void){
	int n = 0;
	for(int i = 0; i < 3; i++){
		int num;
		cin >> num;
		n *= 2;
		n += num;
	}
	if(n == 6 || n == 1) cout << "Open" << endl;
	else cout << "Close" << endl;
	return 0;
}

