#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

int solve(vector<int> _p, string *result){

	vector <int> cnt(5, 0);
	int max = 0;
	int cnt_pair = 0;

	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++){
			if (_p[i] == _p[j]){
				cnt[i]++;
				if (cnt[i]>max) max = cnt[i];
			}
		}
	}

	if (max == 4){
		*result = "four card";
	}
	else if (max == 3){
		*result = "three card";
		for (int i = 0; i < 5; i++){
			if (cnt[i] == 2){
				*result = "full house";
				break;
			}
		}
	}
	else if (max == 2){
		*result = "one pair";
		for (int i = 0; i < 5; i++){
			if (cnt[i] == 2){
				cnt_pair++;
			}
		}
		if (cnt_pair == 4){
			*result = "two pair";
		}
	}
	else{
		*result = "straight";
		sort(_p.begin(), _p.end());

		if ((_p[0] + 1 == _p[1]) || (_p[0] == 1 && _p[1] == 10))
			;
		else
			*result = "null";

		for (int i = 1; i < 4; i++){
			if (_p[i]+1 != _p[i+1]){
				*result = "null";
				break;
			}
		}
	}

	//*result = "one pair";
	return 1;
}

int main(){

	int buf;
	char dummy;
	vector<int> p;
	string result;

	while (1){
		for (int i = 0; i < 4; i++){
			if (cin >> buf >> dummy);else return 0;
			p.push_back(buf);
		}
		cin >> buf;
		p.push_back(buf);


		solve(p, &result);
		
		cout << result << endl;

		p.clear();
	}

	return 0;
}