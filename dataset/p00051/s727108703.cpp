#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main(){
	long long int n,a[10],cast,b,c,input;
	while(cin >> n){
		for(int j=0;j<n;j++){
			b = 0;
			c = 0;
			cast = 10;
			cin >> input;
			for(int i=0;i<8;i++){
				a[i] = input % cast;
				input /= cast;
			}
			sort(a,a+8);
			cast = 1;
			for(int i=0;i<8;i++){
				b += a[i] * cast;
				cast *= 10;
			}
			sort(a,a+8,greater<int>());
			cast = 1;
			for(int i=0;i<8;i++){
				c += a[i] * cast;
				cast *= 10;
			}
			cout << b-c << endl;
		}
	}
	return 0;
}