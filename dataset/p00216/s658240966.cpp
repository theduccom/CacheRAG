#include <iostream>
using namespace std;
int main()
{
	while(true){
		int w;
		cin >> w;
		if(w==-1)
			break;

		int x=0,y=0;
		
		if(w>=0 && w<10)
			y = 1150;
		else if(w>=10 && w<20){
			x = w-10;
			y = 1150 + 125*x;
		}
		else if(w>=20 && w<30){
			x = w-20;
			y = 1150 + 125*10 + 140*x;
		}
		else if(w>=30){
			x = w-30;
			y = 1150 + 125*10 + 140*10 + 160*x;
		}

		cout << (4280 - y) << endl;
	}
	return 0;
}