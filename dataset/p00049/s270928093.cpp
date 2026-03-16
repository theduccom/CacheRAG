#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <cstdio>
#include <string>
using namespace std;

#define A 0
#define B 1
#define AB 2
#define O 3

int main(){
	string in;
	int abo[4] = {};

	while (cin >> in, !cin.eof()){
		int commaPlace = in.find(',');
		if (in[commaPlace + 1] == 'A'){
			if (commaPlace + 2 == in.length()){
				abo[A]++;
			}
			else{
				abo[AB]++;
			}
		}
		else if (in[commaPlace + 1] == 'B'){
			abo[B]++;
		}
		else{
			abo[O]++;
		}
	}
	for (int i = 0; i < 4; i++){
		cout << abo[i] << endl;
	}

	return 0;
}