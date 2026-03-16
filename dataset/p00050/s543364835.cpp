#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <sstream>
#include <vector>
#include <string>
#include <iomanip>
#include <bitset>
#define INF	100000000
#define pb	push_back
#define fi first
#define sec second
#define SS stringstream
using namespace std;
typedef pair<int, int> P;
typedef long long int	ll;

string str;

int main(){
	getline(cin, str);
	for(int i = 0; i < str.size()-4; i++){
		if(str[i] == 'a' && str[i+1] == 'p' && str[i+2] == 'p' && str[i+3] == 'l' && str[i+4] == 'e'){
			str[i] = 'p'; str[i+1] = 'e'; str[i+2] = 'a'; str[i+3] = 'c'; str[i+4] = 'h';
		}
		else if(str[i] == 'p' && str[i+1] == 'e' && str[i+2] == 'a' && str[i+3] == 'c' && str[i+4] == 'h'){
			str[i] = 'a'; str[i+1] = 'p'; str[i+2] = 'p'; str[i+3] = 'l'; str[i+4] = 'e';
		}
	}
	cout << str << endl;
}