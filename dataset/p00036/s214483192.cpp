#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <string>
#include <math.h>
#include <functional>
#include <algorithm>
#include <utility>

typedef long long Int;
#define REP(i,n) for(int i = 0 ; i < n ; ++i)
#define REPS(a,i,n) for(int i = a ; i < n ; ++i)
using namespace std;

int tile[20][20];


int main(){

	while (true){
		string a;
		if (cin.eof())
			break;
		/*
		for (size_t c = a.find_first_of(" "); c != string::npos;  c = a.find_first_of(" ")){
			a.erase(c, 1);
		}
		*/
		getline(cin, a);
		if (a.empty())continue;
		REP(j, 8){
			tile[3][7+3 - j] = '0' - a[7-j];
		}
		REP(i, 7){
			getline(cin,a); 
			/*for (size_t c = a.find_first_of(" "); c != string::npos; c = a.find_first_of(" ")){
				a.erase(c, 1);
			}*/

			REP(j, 8){
				tile[i+3 + 1][7+3 - j] = '0' - a[7-j];
			}
		}
		REP(i, 15){
			REP(j, 15){
				if (tile[i][j]){
					if (tile[i + 1][j] && tile[i][j + 1] && tile[i + 1][j + 1]){
						cout << "A" << endl;
						goto END;
					}
					if (tile[i][j+1] && tile[i+1][j + 1] && tile[i + 1][j + 2]){
						cout << "E" << endl;
						goto END;
					}
					if (tile[i+1][j] && tile[i+1][j + 1] && tile[i + 2][j + 1]){
						cout << "F" << endl;
						goto END;
					}
					if (tile[i + 1][j] && tile[i][j + 1] && tile[i + 1][j - 1]){
						cout << "G" << endl;
						goto END;
					}
					if (tile[i + 1][j] && tile[i+2][j] && tile[i + 3][j]){
						cout << "B" << endl;
						goto END;
					}
					if (tile[i][j+1] && tile[i][j + 2] && tile[i][j + 3]){
						cout << "C" << endl;
						goto END;
					}
					if (tile[i + 1][j] && tile[i+1][j - 1] && tile[i + 2][j - 1]){
						cout << "D" << endl;
						goto END;
					}
				}
			}
		}
	END:;
	}
	return 0;
}