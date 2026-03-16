#include <iostream>

using namespace std;

int main(int argc, char** argv){
	int a, n;
	int data[10];
	
	while(1){
		cin >> n;
		
		if(n==0) break;		
	
		for(int i=0; i<10; i++){
			data[i] = 0;
		}
	
		for(int i=0; i<n; i++){
			cin >> a;
			data[a]++;
		}
		
		for(int i=0; i<10; i++){
			if(data[i]==0) cout << "-";
			for(int j=0; j<data[i]; j++){
				cout << "*";
			}
			cout << endl;
		}
	}
	
	return 0;
}