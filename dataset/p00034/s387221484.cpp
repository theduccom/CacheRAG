#include <iostream>
using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int train[10];
	int v1, v2;
	char c;

	while(cin >> train[0] >> c){
		int sum = 0;
		sum += train[0];
		for(int i = 1; i < 10; ++i){
			cin >> train[i] >> c;
			sum += train[i];
		}

		cin >> v1 >> c >> v2;

		float t = (float)sum / (v1 + v2);
		float l = v1 * t;

		int i = 0;
		while(l > 0){
			l -= train[i];
			++i;
		}

		cout << i << endl;
	}

	return 0;
}