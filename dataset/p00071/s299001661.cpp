#include <iostream>
#include <string>
using namespace std;

void bomb(string s[], int a, int b){
	s[a][b] = '0';
	for(int i = 1; i <= 3; i++){
		if(b + i < 8 && s[a][b+i] == '1') bomb(s,a,b+i);
		if(b - i >= 0 && s[a][b-i] == '1') bomb(s,a,b-i);
		if(a + i < 8 && s[a+i][b] == '1') bomb(s,a+i,b);
		if(a - i >= 0 && s[a-i][b] == '1') bomb(s,a-i,b);
	}
}

int main(){
	int n;
	string area[8];
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 0; j < 8; j++){
			cin >> area[j];
		}
		int a, b;
		cin >> a >> b;
		bomb(area,b-1,a-1);
		cout << "Data " << i << ":" << endl;
		for(int j = 0; j < 8; j++){
			cout << area[j] << endl;
		}
	}
	return 0;
}