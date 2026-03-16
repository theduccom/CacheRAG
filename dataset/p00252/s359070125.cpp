#include<iostream>
using namespace std;

	int main(void){
		int b[3];
		for(int i = 0; i < 3; i++){
			cin >> b[i];
		}
		if((b[0] == 1 && b[1] == 1) && b[2] == 0){
			cout << "Open" << endl;
		}else if((b[0] == 0 && b[1] == 0) && b[2] == 1){
			cout << "Open" << endl;
 		}else{
 			cout << "Close" << endl;
 		}
		
		return 0;	
	}