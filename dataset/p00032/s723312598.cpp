#include <bits/stdc++.h>
using namespace std;

typedef complex<double> P;

int main(){
	int s[3];
	int a1=0,a2=0;
	while( scanf("%d,%d,%d",s,s+1,s+2) != -1 ){
		//sort(s,s+3);
		if( s[0] * s[0] + s[1] * s[1] == s[2] * s[2] ){
			a1++;
		}
		if( s[0] == s[1] )
			a2++;
	}
	cout << a1 << endl;
	cout << a2 << endl;
			
}