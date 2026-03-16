#include <iostream>
using namespace std;

int index(char c){
	if(c == 'A') return 0;
	if(c == 'B') return 1;
	if(c == 'C') return 2;
}

void swap(int a[], int i, int j){
	int t;
	t = a[i]; a[i] = a[j]; a[j] = t;
}

void change(int ball[], char a, char b){
	swap(ball, index(a), index(b));
}

int main(){
	int ball[] = {
		1, 0, 0
	};
	char a, b;
	char co;
	while(cin >> a >> co >> b){
		change(ball, a, b);
	}
	int i = 0;
	while(ball[i] == 0) i++;
	if(i == 0) cout << 'A' << endl;
	if(i == 1) cout << 'B' << endl;
	if(i == 2) cout << 'C' << endl;
	return 0;
}