#include<iostream>

using namespace std;

int n;

string func(int x,int y,int z){
	if(x - 100 && y - 100 && z - 100){
		if(x+y>=180){
			return "A";
		}
		if(x+y+z >= 240){
			return "A";
		}
		if(x+y+z >= 210){
			return "B";
		}
		if(x+y+z>=150){
			if(x>=80||y>=80){
				return "B";
			}
		}
		return "C";
		
	}else{
		return "A";
	}
}

int main(void){
	cin >> n;
	while(n){
		for(int i =0 ; i< n ; i++){
			int pm,pe,pj;
			cin >> pm >> pe >> pj;
			string ans = func(pm,pe,pj);
			cout << ans << endl;
		}
		cin >> n;
	}
}