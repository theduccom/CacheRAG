#include<iostream>
#include<string>

using namespace std;

int main(void){
	int game;
	cin >> game;
	for(int i = 0; i < game; i++){
		int out = 0;
		int base = 0;
		int point = 0;
		string n;
		while(out < 3){
			cin >> n;
			if(n == "HIT"){
				base++;
				if(base == 4){
					point++;
					base--;
				}
			}else if(n == "OUT"){
				out++;
			}else if(n == "HOMERUN"){
				point += base + 1;
				base = 0;
			}
		}
		cout << point << endl;
	}
	
	return 0;
}