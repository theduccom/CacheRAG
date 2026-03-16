#include <iostream>

using namespace std;

int main(){
	int n,t;
	while(cin >> n && n){
		int v[10] = {0};
		
		for(int i=0;i<n;i++){
			cin >> t;
			v[t]++;
		}
		for(int i=0;i<10;i++){
			if(v[i] == 0){
				cout << "-" << endl;
			}else{
				for(int j=0;j<v[i];j++){
					cout << "*";
				}
				cout << endl;
			}
		}
	}
}