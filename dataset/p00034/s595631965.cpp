#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int a[10];
	int v1,v2;
	while(cin >> a[0]){
		char com;
		for(int i=1;i<10;i++) cin >> com >> a[i];
		cin >> com >> v1 >> com >> v2;
		int l = 0;
		for(int i=0;i<10;i++){
			l += a[i];
			a[i] *= v1+v2;
		}
		l *= v1;
		int s = 0;
		for(int i=0;i<10;i++){
			s += a[i];
			if(l<=s){
				cout << i+1 << endl;
				break;
			}
		}
	}
}