#include <iostream>
using namespace std;

int main(){
	int n;
	int ice[10000];
	int k[16];

	while(cin >>n,n){

		for(int i=0;i<16;i++){
			k[i]=0;
		}

		for(int i=0;i<n;i++){
			cin >>ice[i];
		}


		for(int i=0;i<n;i++){
			switch(ice[i]){
				case 0: k[0]++; break;
				case 1: k[1]++; break;
				case 2: k[2]++; break;
				case 3: k[3]++; break;
				case 4: k[4]++; break;
				case 5: k[5]++; break;
				case 6: k[6]++; break;
				case 7: k[7]++; break;
				case 8: k[8]++; break;
				case 9: k[9]++; break;
			}
		}
/*
		cout <<endl;
		for(int i=0;i<10;i++)
			cout << k[i] <<endl;
*/		

		for(int i=0;i<10;i++){
			if(k[i] > 0){
				for(int j=0;j<k[i];j++){
					cout <<"*";
				}
				cout << endl;
			}else {
				cout <<"-" <<endl;
			}
		}

	}


	return 0;
}