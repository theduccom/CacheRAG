#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int i = 0;
	float ansmax, ansmin = 100000;
	float mou[101];

	while(cin >> mou[i]){

		if(mou[i] == 0) break;

		ansmax = max(ansmax,mou[i]);
		ansmin = min(ansmin,mou[i]);

		i++;
	}

	cout << ansmax - ansmin << endl;

	return 0;
}