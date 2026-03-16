#include <iostream>
#include <cstring>

using namespace std;

string field[9];

void vis(int x, int y){

	if(x<0 || 7<x || y<0 || 7<y || field[y][x]=='0'){
		return;
	}

	if(field[y][x]=='1'){
	
		field[y][x]='0';

		for(int t=1; t<=3; ++t){
		
			vis(x+t, y);
			vis(x-t, y);
			vis(x, y+t);
			vis(x, y-t);
		}
	}

	return;
}

int main(){

	int n, x, y, cnt=1;

	cin>>n;

	while(cnt<=n){
		
		for(int j=0; j<8; ++j){
			string s;
			cin>>s;
			field[j]=s;
		}
		
		cin>>x>>y;
		x--; y--;
		field[y][x]=='1';
		vis(x, y);
		
		cout << "Data "<< cnt << ":" << endl;
		
		for(int j=0; j<8; ++j){

			cout << field[j] << endl;
		}

		cnt++;
	}
		
	return 0;
}