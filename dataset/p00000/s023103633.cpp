#include<iostream>

//関数の宣言
void Mul();

int main()
{
	Mul();

	return 0;

}

//関数の定義
void Mul(){
	for (int i = 1; i <= 9; i++){
		for (int j = 1; j <= 9; j++){
			std::cout << i << 'x' << j << '=' << i*j << '\n';
		}
	}
}
