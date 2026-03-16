#include <iostream>
using namespace std;

int field[8];

int zerocount()
{
	int count=0;
	for(int i=0;i<8;i++){
		if(field[i] == 0)
			count++;
	}
	return count-4;
}

int main()
{
	bool flag;
	while(cin >> field[0]){
		for(int i=1;i<8;i++){
			cin >> field[i];
		}
		switch(zerocount()){
			case 0:
				cout << 'B' << endl;
				break;
			case 1:
				flag = true;
				for(int i=0;i<8;i++){
					if(field[i] != 0 && flag == true){
						if((field[i] - field[i+2]) < 0){
							cout << 'D' << endl;
							flag = false;
							break;
						}else{
							cout << 'F' << endl;
							flag = false;
							break;
						}
					}
				}
				break;
			case 2:
				flag = true;
				for(int i=0;i<8;i++){
					if(field[i] != 0 && flag == true){
						if((field[i] - field[i+1]) == 0){
							cout << 'A' << endl;
							flag = false;
							break;
						}else if(field[i] - field[i+1] < 0){
							cout << 'G' << endl;
							flag = false;
							break;
						}else{
							cout << 'E' << endl;
							flag = false;
							break;
						}
					}
				}
				break;
			case 3:
				cout << 'C' << endl;
				break;
			default:
				break;
		}
	}
	return 0;
}