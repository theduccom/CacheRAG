#include<iostream>
using namespace std;
int ten(char x){
	if(x == 'I') return 1;
	if(x == 'V') return 5;
	if(x == 'X') return 10;
	if(x == 'L') return 50;
	if(x == 'C') return 100;
	if(x == 'D') return 500;
	if(x == 'M') return 1000;
}

int main(){
	char roman[102];
	int i;
	int ans;
	while(cin >> roman){
		i = 0; ans = 0;
		while(roman[i] != '\0'){
			if(roman[i+1] != '\0' && ten(roman[i]) < ten(roman[i+1])) ans = ans - ten(roman[i]);
			else ans = ans + ten(roman[i]);
			i++;
		}
		cout << ans << endl;
	}
}