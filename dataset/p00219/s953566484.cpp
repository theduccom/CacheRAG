#include <iostream>
using namespace std;

int main() {
	int n;
	while(1){
		cin >> n;
		if(n==0) break;
		int ice[10000], count[10]={0};
		for(int i=0; i<n; i++){
			cin >> ice[i];
			count[ice[i]]++;
		}
		for(int j=0; j<10; j++){
			if(count[j]==0) cout << "-" << endl;
			else{
				for(int k=0; k<count[j]; k++){
					cout << "*";
				}
				cout << endl;
			}
		}
	}
	return 0;
}
