#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
	double x, h, teimen, sokumen, sh, shpm, nizyo, ans;

	while(1){
		cin >> x >> h;
		if(x == 0 && h == 0){
			break;
		} 

		teimen = x * x;
		nizyo =(x / 2) * (x / 2) + (h * h);
		shpm = sqrt(nizyo);
		sh = fabs(shpm);

		sokumen = 4 * x * sh / 2;

		ans = teimen + sokumen;

		cout << ans<< fixed << setprecision(6) << endl;
	}

	return 0;
}