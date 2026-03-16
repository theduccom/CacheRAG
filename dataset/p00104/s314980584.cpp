#include <iostream>
using namespace std;
int c[100][100],a,b,n;
char ch[100][100];
int check(int x,int y){
	c[x][y] = 1;
	switch (ch[x][y]) {
	case '>':
		if (c[x][y+1] == 1) return 1;
		n = check(x,y+1);
		break;
	case '<':
		if (c[x][y-1] == 1) return 1;
		n = check(x,y-1);
		break;
	case 'v':
		if (c[x+1][y] == 1) return 1;
		n = check(x+1,y);
		break;
	case '^':
		if (c[x-1][y] == 1) return 1;
		n = check(x-1,y);
		break;
	case '.':
		a = x;
		b = y;
		return 0;
		break;
	}
	return n;
}
int main(){
	int x,y,i,j;
	while(cin >> x >> y && (x != 0 && y != 0)){
		for(i=0;i<x;i++){
			cin >> ch[i];
		}
		if (check(0,0)) cout << "LOOP" << endl;
		else cout << b << " " << a << endl;
		for(i=0;i<100;i++){
			for(j=0;j<100;j++){
				c[i][j] = 0;
				ch[i][j] = '\0';
			}
		}
	}
	return 0;
}