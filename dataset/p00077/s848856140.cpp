#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <queue>
#include <set>
#include <map>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <bitset>
using namespace std;


const double EPS = 1e-9;
const double PI = 3.14159265359;

int main(){
	string s;

	while(getline(cin, s)){
		for(int i = 0; i < s.size(); i++){
			if(s[i] == '@'){
				i+=2;
				for(int j = 0; j < s[i-1] - '0'; j++){
					cout << s[i];
				}
			}else{
				cout << s[i];
			}
		}
		cout << endl;
	}

	return 0;
}