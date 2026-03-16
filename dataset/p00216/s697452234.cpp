#include<iostream>
using namespace std;

int prise(int water, int count){
	if(count==0) return water*125;
	if(count==1) return water*140;
	return water*160;
}

int main(){
	int prev=4280, water;
	while(cin >> water){
		if(water<0) break;
		int sum=1150, count=0;
		water-=10;
		while(water >= 0){
			if(water >= 10){
				sum += prise(10,count);
				count++;
			}
			else{
				sum += prise(water,count);
			}
			water-=10;
		}
		cout << prev - sum << endl;
	}
	return 0;
}