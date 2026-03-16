#include<iostream>
#include<cstdio>
using namespace std;
#define int long long
signed main(){
	int ball[3] = {1,0,0};
	char a,b;
	while( scanf("%c,%c", &a, &b) != EOF ){
		a -= 'A';
		b -= 'A';
		int t = ball[a];
		ball[a] = ball[b];
		ball[b] = t;
	}
	for(char i=0;i<3;i++){
		if(ball[i] == 1) cout << (char)('A' + i) << endl;
	}
	return 0;
}