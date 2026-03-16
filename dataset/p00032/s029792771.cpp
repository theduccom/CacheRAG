#define _USE_MATH_DEFINES
 
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main(){
	int a, b, c;
	char t;
	int hishigata=0;
	int chohokei=0;
	while(cin >> a >> t >> b >> t >> c){
		if(a*a+b*b==c*c){
			chohokei++;
		}else if(a==b){
			hishigata++;
		}
	}
	cout << chohokei << endl;
	cout << hishigata << endl;
	return 0;
}