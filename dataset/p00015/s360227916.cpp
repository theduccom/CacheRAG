#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;
int main(){
	int N;
	string x, y, temp;
	int i, a[80];
	

	cin >> N;

	for(i = 0;i < 80;i++){
		a[i] = 0;
	}

	while(N != 0){
		bool over = false;
		if(N == 0) break;
		cin >> x >> y;
		N--;
		if(x.size() > 80 || y.size() > 80){
			cout << "overflow" << endl;
			continue;
		}

		if(x == "0" && y == "0"){
			cout << "0" << endl;
			continue;
		}

		if(x.size() < y.size()){
			temp = x;
			x = y;
			y = temp;
		}
		int xi = 0, yi = 0;
		for(i = 0;i < x.size();i++){
			xi = x[x.size() - 1 - i] - '0';
			//cout << "xi = " << xi << endl;
			if(i >= y.size()){
				yi = 0;
			}
			else {
				yi = y[y.size() - 1 - i] - '0';
				//cout << "yi = " << yi << endl;
			}
			a[i] += xi + yi;
			//cout << "xi + yi  = " << a[x.size() - 1 - i] << endl;
			if(a[i] > 9){
				if(i < 79){
					a[i] = a[i] - 10;
					a[i + 1] += 1;
				}
				else if(i >= 79){
					cout << "overflow"	<< endl;
					over = true;
					break;				
				}
			}

			
		}
		 
		if(!over){
			bool start = false;
			for(i = 79;i >= 0;i--){
				if(!start && a[i] > 0){
					start = true;
				}
				if(start){
					cout << a[i];
				}
			}
			cout << endl;
		}
		
		for(i = 0;i < 80;i++){
				a[i] = 0;
		}
		
	}
	return 0;
}