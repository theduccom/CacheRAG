// 2014/09/10 Tazoe

#include <iostream>
using namespace std;

int main()
{
	while(true){
		int Y[4], X[4];
		int I = 0;

		for(int y=0; y<8; y++){
			for(int x=0; x<8; x++){
				char c;
				cin >> c;

				if(cin.eof())
					return 0;

				if(c=='1'){
					Y[I] = y;
					X[I] = x;
					I++;
				}
			}
		}
/*
		for(int i=0; i<4; i++){
			cout << Y[i] << ' ' << X[i] << endl;
		}
*/
		if(Y[1]==Y[0] && Y[2]==Y[0]+1 && Y[3]==Y[0]+1 && X[1]==X[0]+1 && X[2]==X[0] && X[3]==X[0]+1){
			cout << 'A' << endl;
		}
		else if(Y[1]==Y[0]+1 && Y[2]==Y[0]+2 && Y[3]==Y[0]+3 && X[1]==X[0] && X[2]==X[0] && X[3]==X[0]){
			cout << 'B' << endl;
		}
		else if(Y[1]==Y[0] && Y[2]==Y[0] && Y[3]==Y[0] && X[1]==X[0]+1 && X[2]==X[0]+2 && X[3]==X[0]+3){
			cout << 'C' << endl;
		}
		else if(Y[1]==Y[0]+1 && Y[2]==Y[0]+1 && Y[3]==Y[0]+2 && X[1]==X[0]-1 && X[2]==X[0] && X[3]==X[0]-1){
			cout << 'D' << endl;
		}
		else if(Y[1]==Y[0] && Y[2]==Y[0]+1 && Y[3]==Y[0]+1 && X[1]==X[0]+1 && X[2]==X[0]+1 && X[3]==X[0]+2){
			cout << 'E' << endl;
		}
		else if(Y[1]==Y[0]+1 && Y[2]==Y[0]+1 && Y[3]==Y[0]+2 && X[1]==X[0] && X[2]==X[0]+1 && X[3]==X[0]+1){
			cout << 'F' << endl;
		}
		else if(Y[1]==Y[0] && Y[2]==Y[0]+1 && Y[3]==Y[0]+1 && X[1]==X[0]+1 && X[2]==X[0]-1 && X[3]==X[0]){
			cout << 'G' << endl;
		}
	}

	return 0;
}