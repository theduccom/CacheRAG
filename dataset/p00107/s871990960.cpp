/*****include*****/
#include <iostream>
#include <fstream>

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
	int c_v,c_h,c_w;
	int n;
	int e_r;
	/*****処理部*****/
	while(1){
		cin >> c_v >> c_w >> c_h;
		if(c_v == 0 && c_w == 0 && c_h == 0)	break;
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> e_r;
			if((c_v*c_v + c_w*c_w) < (e_r*2 * e_r*2)){
				//cout << c_v*c_v + c_w*c_w << " " << e_r*2 * e_r*2 << endl;
				cout << "OK" << endl;
			}else if((c_v*c_v + c_h*c_h) < (e_r*2 * e_r*2)){
				//cout << c_v*c_v + c_h*c_h << " " << e_r*2 * e_r*2 << endl;
				cout << "OK" << endl;
			}else if((c_h*c_h + c_w*c_w) < (e_r*2 * e_r*2)){
				//cout << c_h*c_h + c_w*c_w << " " << e_r*2 * e_r*2 << endl;
				cout << "OK" << endl;
			}else{
				//cout << c_v*c_v + c_w*c_w << " " << e_r*2 * e_r*2 << endl;
				cout << "NA" << endl;
			}
		}
	}
	/*****処理終了後*****/
#ifdef DEBUG
	fout.close();
	fin.close();
#endif
	return 0;
}