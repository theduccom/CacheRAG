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
	int n;
	int matrix[11][11];
	/*****処理部*****/
	while(1){
		cin >> n;
		if(n==0)	break;
		for(int i=0;i<11;i++)
			for(int j=0;j<11;j++)
				matrix[i][j] = 0;
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				cin >> matrix[i][j];
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				matrix[i][n] += matrix[i][j];
		for(int j=0;j<n;j++)
			for(int i=0;i<n;i++)
				matrix[n][j] += matrix[i][j];
		for(int i=0;i<n;i++)
			matrix[n][n] += matrix[i][n];
		for(int i=0;i<=n;i++){
			for(int j=0;j<=n;j++){
				cout.width(5);
				cout << matrix[i][j];
			}
			cout << endl;
		}
	}

	/*****処理終了後*****/
#ifdef DEBUG
	fout.close();
	fin.close();
#endif
	return 0;
}