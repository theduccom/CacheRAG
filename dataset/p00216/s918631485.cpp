#include<iostream>

using namespace std;

int money(int num){
	int sum = 0;
	if(num > 30){
		sum = (num - 30) * 160 + 3800;
	}else if(num > 20){
		sum = (num - 20) * 140 + 2400;
	}else if(num > 10){
		sum = (num - 10) * 125 + 1150;
	}else{
		sum = 1150;
	}
	return sum;
}

int main(){
	int w;
	int last = 4280,now;
	
	while(cin >> w,w!=-1){
		now = money(w);
		cout << last - now << endl;
	}
	return 0;
}