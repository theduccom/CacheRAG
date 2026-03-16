#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int debug = 0;
int x, y;
bool field[8][8];

void startfrom(int x, int y){
	if(debug) cout << "start from " << x << " " << y << endl;
	
	field[x][y] = false;
	for(int i=-3;i<=3;i++){
		if((0 <= x+i && x+i < 8) &&
		field[x+i][y] == true){
			startfrom(x+i,y);
		}
		if((0 <= y+i && y+i < 8) &&
		field[x][y+i] == true){
			startfrom(x,y+i);
		}
	}
	
}

int main(void){
	//bool field[8][8];
	
	memset(field,false,sizeof(field));
	
	int n;
	cin >> n;
	//cin.ignore(); // CR+LF
	
	for(int i=0;i<n;i++){
		string str;
				
		//if(i!=0) cout << endl; // for between each dataset
		for(int j=0;j<8;j++){
			cin >> str;
			if(debug) cout << "input str = " << str << endl;
			for(int k=0;k<8;k++){
				field[j][k] = str[k] - '0';
				if(debug) cout << field[j][k];
			}
			if(debug) cout << endl;
		}
		
		cin >> y; //NOTE: these are 1 origin
		cin >> x;
		
		//recursive
		startfrom(x-1,y-1);
		cout << "Data " << i+1 << ":" <<endl; 
		for(int j=0;j<8;j++){
			for(int k=0;k<8;k++){
				cout << field[j][k];
			}
			cout << endl;
		}
//		cout << endl;
	}

}