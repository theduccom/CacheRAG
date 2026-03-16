#include <iostream>
#include <string>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int mx,mi;
	int n;
	string str;
	cin >> n;
	while(n--){
		mx=0,mi=99999999+1;
		vector<char> data(8);
		for(int i=0; i<8; ++i){
			cin >> data[i];
		}
		sort(data.begin(),data.end());
		do{
			str.clear();
			for(size_t i=0; i<data.size(); ++i){
				str += data[i];
			}
			mx = max(atoi(str.c_str()),mx);
			mi = min(atoi(str.c_str()),mi);
		}while(next_permutation(data.begin(), data.end()));
		cout << mx-mi << endl;
	}
	return 0;
}