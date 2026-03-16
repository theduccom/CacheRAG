#include<iostream>
using namespace std;

int main(){
	int n,m;
	while(1){
		cin >> n;
		if(n == 0) break;
		int cou[11111]={0};
		for(int i=0;i<n;i++){
			cin >> m;
			cou[m]++;
		}
		for(int i=0;i<10;i++){
			if(cou[i] == 0) cout  << "-";
			for(int j=0;j<cou[i];j++){
				cout << "*";
			}
			cout << endl;
		}
	}
}