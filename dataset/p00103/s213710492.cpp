#include <iostream>
#include <string>
using namespace std;

int main(){
	int inning_num;
	
	cin >> inning_num;
	for (int i = 0; i < inning_num; i++){
		int out = 0;
		unsigned char state = 0;
		int score = 0;
		while (out != 3){
			string in;
			cin >> in;
			if (in == "OUT"){
				out++;
			}
			else if (in == "HIT"){
				state <<= 1;
				state |= 0x0001;
			}
			else if (in == "HOMERUN"){
				state <<= 1;
				state |= 0x0001;
				state <<= 3;
			}
			for (unsigned char j = (1<<3); j; j <<= 1){
				if (state & j) {
					score++;
					state &= ~j;
				}
			}
		}
		cout << score << "\n";
	}
}