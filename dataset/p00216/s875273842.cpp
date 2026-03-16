#include <iostream>
using namespace std;

int main() {
	int mizu,kane,sa;
	kane=0;
	int n=1;
	while(n){
		
		cin >> mizu;
		
		if(mizu==-1) break;
		if(mizu>10 && mizu<=20){
			mizu=mizu-10;
			kane=1150+mizu*125;
		}else if(mizu>20 && mizu<=30){
			mizu=mizu-20;
			kane=1150+1250+mizu*140;
		}else if(mizu<=10){
			kane=1150;
		}else if(mizu>30){
			mizu=mizu-30;
			kane=1150+1250+1400+(mizu*160);
		}
		n++;
		cout << 4280-kane << endl;
		}
	
	return 0;
}