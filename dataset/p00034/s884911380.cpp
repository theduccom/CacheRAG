#include <iostream>


using namespace std;


int main(){

	int L[10], v1, v2, sum, buf, ans;
	float point;
	char c;


	while (1){
		sum = 0;
		ans = 0;
		buf = 0;

		for (int i = 0; i < 10; i++){
			cin >> L[i];
			cin >> c;
			sum += L[i];
		}
		cin >> v1 >> c >> v2;

		if (cin.eof()) break;

		point = (float)sum * v1 / (v1 + v2);

		for (int i = 0; i < 10; i++){
			buf += L[i];
			if ((float)buf >= point){
				ans = i + 1;
				break;
			}
		}

		cout << ans << endl;

	}


	return 0;
}