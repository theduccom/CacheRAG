#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
	string str;
	double x, y;
	int step, carb, arg;
	int p;
	bool minus;
	
	x = 0; y = 0; arg = 90;
	while(true){
		cin >> str;
		step = 0; carb = 0;
		p = 0;
		while(str[p] != ','){
			step = step * 10 + (str[p] - 48);
			p++;
		}
		p++;
		minus = false;
		while(p < str.size()){
			if(str[p] == '-') minus = true;
			else carb = carb * 10 + (str[p] - 48);
			p++;
		}
		if(step == 0 && carb == 0) break;
		if(!minus) carb *= -1;
		
		x += (double)step * cos((double)arg * 3.1415 / 180.0);
		y += (double)step * sin((double)arg * 3.1415 / 180.0);
		
		arg += carb;
	}
	
	cout << (int)x << endl << (int)y << endl;
	
	return 0;
}