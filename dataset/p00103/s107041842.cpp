#define _CRT_SECURE_NO_WARNINGS

#include<fstream>
#include<iostream>
#include<string>
#include<iomanip>
#include<list>
#include<math.h>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<utility>

using namespace std;

int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int o = 0;
		int point = 0;
		int stt[3] = { 0 };
		while (o < 3){
			string s;
			cin >> s;
			if (s.compare("HIT") == 0) {
				if (stt[2] == 1) {
					point++;
				}
				for (int j = 2; j > 0; j--) {
					stt[j] = stt[j - 1];
				}
				stt[0] = 1;
			} else if (s.compare("HOMERUN") == 0) {
				for (int j = 0; j < 3; j++) {
					if (stt[j] == 1) {
						point++;
					}
					stt[j] = 0;
				}
				point++;
			} else if (s.compare("OUT") == 0) {
				o = o++;
			}
		}
		cout << point << endl;
	}
	return 0;
}