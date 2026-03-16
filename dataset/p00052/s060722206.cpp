#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
	int n;
	while(1){
		cin >> n;
		if(n==0) break;
		int c = 0;
		for(int i=1;;i++){
			int a = 1;
			for(int j=0;j<i;j++) a*=5;
			int b = n/a;
			if(b==0) break;
			c += b;
		}
		cout << c << endl;
	}
}