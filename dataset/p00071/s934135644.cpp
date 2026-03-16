#include <iostream>
#include <stdio.h>
using namespace std;

struct dat {
	char s[8][9];
	};
dat *da;

void bomb(int x,int y,int i) {
	int b; 
	da[i].s[y][x]='0';
	for (b=1;b<4;b++) {
		if (y-b>=0) if (da[i].s[y-b][x]=='1') bomb(x,y-b,i);
		if (y+b<=7) if (da[i].s[y+b][x]=='1') bomb(x,y+b,i);
		if (x-b>=0) if (da[i].s[y][x-b]=='1') bomb(x-b,y,i);
		if (x+b<=7) if (da[i].s[y][x+b]=='1') bomb(x+b,y,i);
	}
}

int main() {
    int n,i,j,x,y;
	char a[2];
	cin >> n;
	da=new dat[n];
	for (i=0; i<n; i++) {
		gets(a);
		for (j=0;j<8;j++) cin >> da[i].s[j];
		cin >> x;
		cin >> y;
		bomb(x-1,y-1,i);
		}

	for (i=0;i<n;i++) {
		cout << "Data " << i+1 << ':' << endl;
		for (j=0;j<8;j++) cout << da[i].s[j] << endl;
	}
	delete [] da;
	return 0;
}