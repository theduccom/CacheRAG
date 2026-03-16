#include<bits/stdc++.h>
using namespace std;

int main(void){

	int n;
	cin >> n;

	int runner = 0;
	int result = 0;

	int i = 0;
	while(i < n * 3){

		string buff;
		cin >> buff;

		if (buff == "HIT"){
			runner++;
			if (runner > 3){
				result++;
				runner = 3;
			}
		}
		else if (buff == "OUT"){
			i++;
			if (i % 3 == 0){
				cout << result << endl;
				runner = 0;
				result = 0;
			}
		}
		else if (buff == "HOMERUN") {
			result += (runner + 1);
			runner = 0;
		}

	}

	return 0;
}