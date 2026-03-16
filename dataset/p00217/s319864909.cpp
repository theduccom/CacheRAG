#include <bits/stdc++.h>

using namespace std;

int main(){
	int num, human, one, two;
	int i, j, nans, wans;
	while(cin >> num){
		if(num == 0) break;
		int tmp = 0;
		for(i = 0; i < num; ++i){
			cin >> human >> one >> two;
			if(one + two > tmp){
				tmp = one + two;
				nans = human;
				wans = tmp;
			}
		}
		cout << nans << " " << wans << endl;
 	}
	return 0;
}