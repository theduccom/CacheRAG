#include<iostream>
using namespace std;

int main(){
	int n, p;
	int type[10];

	while(cin >> n, n){
		fill(type, type+10, 0);
		for(int i=0; i < n; i++){
			cin >> p;
			type[p]++;
		}
		for(int i=0; i < 10; i++){
			if(type[i] != 0){
				for(int j=0; j < type[i]; j++) cout << '*';
				cout << endl;
			}
			else cout << '-' << endl;
		}
	}
}