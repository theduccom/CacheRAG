#include<iostream>
using namespace std;



int main(void)
{
	//乗車券 , 特急券 , 乗車特急券
	int h_input[4] = {0};
	//掛け算変数(Bit演算で使用)
	int kakeru = 100;

	for (int i = 0; i < 3; i++)
	{
		cin >> h_input[i];
		h_input[3] += h_input[i] * kakeru;
		//次は10の位
		kakeru /= 10;
	}

	if (h_input[3] == 110 || h_input[3] == 1)
	{
		cout << "Open" << endl;
	}
	else
	{
		cout << "Close" << endl;
	}

	return 0;
}