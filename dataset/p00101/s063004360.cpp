#include <iostream>
#include <string>
using namespace std;

int main(void)
{

	string instr;
	int N;

	cin >> N;

	cin.get();	//改行無視るための一文字読み込み関数（今回は()の中は何も書かない）
	for(int i = 0; i < N; i++){
		getline(cin, instr);
		for(int i = 0; i < instr.length(); i++){
			if(instr.substr(i, 7) == "Hoshino"){
				instr[i+6] = 'a';
				i += 5;
			}
		}
		cout << instr << endl;
	}

	return 0;
}