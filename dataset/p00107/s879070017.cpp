#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <cstdio>
using namespace std;

int main(){
	int a, b, c;
	while(cin >> a >> b >> c, a+b+c){
		if(a > b){
			swap(a, b);
		}
		if(b > c){
			swap(b, c);
		}
		int n;
		cin >> n;
		int size_sq = a*a+b*b;
		while(n--){
			int r;
			cin >> r; 
			if(4*r*r > size_sq){
				cout << "OK" << endl;
			}else{
				cout << "NA" << endl;
			}
		}
	}
	
	return 0;
}