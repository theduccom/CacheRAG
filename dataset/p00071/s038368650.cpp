#include<iostream>
using namespace std;

void burn(int, int);

char data[8][8];

int main(){
	int n;
	int a,b;
	
	
	cin >> n;
	
	for(int k=1; k<=n; k++){
		
		for(int i=0; i<8; i++){
			for(int j=0; j<8; j++) cin >> data[i][j];
		}
		
		cin >> a >> b;
		
		burn(b-1,a-1);
		cout<< "Data "<<k<<":"<<endl;
		for(int i=0; i<8; i++){
			for(int j=0; j<8; j++) cout << data[i][j];
			cout << endl;
		}
	}
}

void burn(int x, int y){
	data[x][y]='0';
	//cout << "t";
	//cout << "x=" << x << " y=" << y << endl;
	for(int i=1;i<=3;i++){
		if(data[x+i][y]=='1' && 0 <= x+i && x+i < 8) burn(x+i,y);
		if(data[x-i][y]=='1' && 0 <= x-i && x-i < 8) burn(x-i,y);
		if(data[x][y+i]=='1' && 0 <= y+i && y+i < 8) burn(x,y+i);
		if(data[x][y-i]=='1' && 0 <= y-i && y-i < 8) burn(x,y-i);
	}
}