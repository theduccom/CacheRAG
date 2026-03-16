#include <iostream>
using namespace std;

int WaterBill(int w){
	int bill=1150;
	
	if(w>=10 && w<=20)bill += 125*(w-10);
	else if(w>=20 && w<=30)bill += 1250 + 140*(w-20);
	else if(w>=30)bill += 1250 + 1400 + 160*(w-30);
	
	return bill;
}

int main() {
	int w;
	while(cin>>w,w+1){
		cout << 4280 - WaterBill(w) << endl;
	}
	
	return 0;
}