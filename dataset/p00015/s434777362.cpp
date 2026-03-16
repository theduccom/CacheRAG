#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <algorithm>
#include <stdlib.h>

using namespace std;


int main(){
	int n;
	cin >> n;
	for(int i=0 ; i<n ; i++){
		string a, b;
		cin >> a;
		cin >> b;

		int flag=0;

		if(a.size() < b.size()){
			string temp;
			temp = a;
			a = b;
			b = temp;
		}
		while(b.size() != a.size()){
			b = "0" + b;
		}

		if(a.size() > 80){
			flag = 1;
			cout << "overflow" << endl;
		}else{
			for(int i=0 ; i<a.size() ; i++){
				a[a.size()-1-i] += b[b.size()-1-i] - '0';
			}
			for(int j=0 ; j<a.size()-1 ; j++){
				if(a[a.size()-1-j] > '9'){
					a[a.size()-1-j] -= 10;
					a[a.size()-2-j]++;
				}
			}
			if(a[0] > '9'){
				a[0] -= 10;
				a = "1" + a;
			}

		}

		if(a.size() > 80) {
			if(flag == 0)cout << "overflow" << endl;
		}else{
			cout << a << endl;
		}

	}

	return 0;
}