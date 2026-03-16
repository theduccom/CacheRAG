
#include<iostream>

using namespace std;


//入力文字列
char str_input[8][9];


//入力数
int n = 0;
//爆弾座標
int bom_y = 0 , bom_x = 0;


//最初のボム
void f_bom(int);


//再起関数
void f_saiki(int , int , int , int);




int main(void)
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		//入力
		for (int j = 0; j < 8; j++)
		{
			cin >> str_input[j];
		}
		cin >> bom_x >> bom_y;

		//関数で処理
		f_bom(i);
	}

	return 0;
}




//最初のボム
void f_bom(int index)
{
	//座標が1ずつ配列とずれている
	bom_y-- , bom_x--;

	//文字列の現在地を'0'にして再起関数へ
	str_input[bom_y][bom_x] = '0';

	f_saiki(bom_y - 3 , bom_y + 3 , bom_x - 3 , bom_x + 3);

	cout << "Data " << index + 1 << ":" << endl;

	for (int i = 0; i < 8; i++)
	{
		cout << str_input[i] << endl;
	}
}


//再起関数
void f_saiki(int y_min , int y_max , int x_min , int x_max)
{
	//+ 3は-3でもらった引数を無理やり戻す)
	int yy = y_min + 3;
	int xx = x_min + 3;

	//indexを超えないように調整
	for (int i = y_min; i <= y_max; i++)
	{
		if (i >= 0 && i < 8)
		{
			//'1'(x_min 
			if (str_input[i][xx] == '1')
			{
				//まずこの位置の’1’を消す
				str_input[i][xx] = '0';

				//再帰
				f_saiki(i - 3 , i + 3 , xx - 3 , xx + 3);
			}
		}
	}

	//同様にｘ
	for (int i = x_min; i <= x_max; i++)
	{
		if (i >= 0 && i < 8)
		{
			//'1'
			if (str_input[yy][i] == '1')
			{
				//消してから(無限ループ防止)
				str_input[yy][i] = '0';

				f_saiki(yy - 3 , yy + 3 , i - 3 , i + 3);
			}
		}
	}
}