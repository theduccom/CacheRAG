#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int check(double *l, double *s);

int main()
{
	int n, ans;
	double a[3], b[3];	//[0]:x[1]:y[2]:r

	cin >> n;

	for (int i=0; i<n; i++)
	{
		cin >> a[0] >> a[1] >> a[2] >> b[0] >> b[1] >> b[2];

		if(a[2] > b[2]) {		//aを大きい円、bを小さい円としたとき
			ans = check(&a[0], &b[0]);
		}
		else {					//bを大きい円、aを小さい円としたとき
			ans = check(&b[0], &a[0]);
			ans *= (ans == 2) ? -1 : 1;		//aがbの中にあるときの処理
		}

		cout << ans << endl;
	}

	return 0;
}

int check(double *l, double *s)	//円の重なり・内外を判定
{
	double d = (l[0]-s[0])*(l[0]-s[0]) + (l[1]-s[1])*(l[1]-s[1]);

	d = sqrt(d);

	if(d < l[2]-s[2]) {	//小さい円が大きい円の内側にあるとき
		return 2;
	}
	else if(l[2]-s[2] <= d && d <= l[2]+s[2]) {	//円周が交わっているとき
		return 1;
	}
	else {
		return 0;	//外側にあるとき
	}
}