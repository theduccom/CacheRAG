/*****include*****/
#include <iostream>
#include <fstream>
#include <string>

/*****デバッグ定義*****/
//#define DEBUG
/*****マクロ定義*****/

/*****名前空間*****/
using namespace std;

/*****グローバル変数置き場*****/

/*****その他関数置き場*****/

/*****main関数*****/
int main(){
	/*****ファイルオープン*****/
#ifdef DEBUG
	ofstream fout("output.txt");
	ifstream fin("input.txt");
	if(!fout || !fin){
		cout << "Can't open the file.\n";
		return 0;
	}
#endif
	/*****変数置き場*****/
	string words;
	int n;
	int index;
	/*****処理部*****/
	cin >> n;
	for(int i=0;i<n;i++){
		do{
			getline(cin,words);
		}while(words == "");
		//cin >> words;
		int j;
		j=0;
		while(1){
			index = words.find("Hoshino",j);
			if(index == string::npos){
				//cout << j << endl;
				break;
			}
			words.replace(index,7,"Hoshina");
			j += 6;
			//cout << words << endl;
		}
		cout << words << endl;
	}
	/*****処理終了後*****/
#ifdef DEBUG
	fout.close();
	fin.close();
#endif
	return 0;
}