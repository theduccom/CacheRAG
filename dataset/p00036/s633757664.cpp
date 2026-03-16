#include<iostream>
#include<string>

using namespace std;

int main()
{
	int k = 0;
	for(;;){
		char MAP[8][8];
		int cont = 0;
		int air_cont = 0;
		bool canCont = false;
		
		for(int i = 0; i < 8; i++){
			for(int j = 0; j < 8; j++){
				cin >> MAP[i][j];
				if(cin.eof()){
					return 0;
				}
			}
		}
		//ツ債カツ端ツづーツ個ゥツづつつッツづつゥツづァツ催古」ツづ個ブツδ債ッツクツつェツ個ゥツづつつゥツづゥツづ慊づづ個凝ウツ板陳青板づーツ記ツ録
		for(int i = 0; i < 8; i++){
			for(int j = 0; j < 8; j++){
				if(MAP[i][j] == '1'){
					cont++;
					if(cont == 1){
						canCont = true;
					}
					if(cont == 4){
						//ツδ仰ーツプツ仰ュツ青ァツ終ツ猟ケ
						goto FIN;
					}
				}
				else if(canCont == true && MAP[i][j] == '0'){
					air_cont++;
				}
			}
		}
		
		FIN:;
		
		switch(air_cont){
			case 0:
				cout << "C" << endl;
				break;
			case 5:
				cout << "G" << endl;
				break;
			case 6:
				cout << "A" << endl;
				break;
			case 7:
				cout << "E" << endl;
				break;
			case 12:
				cout << "D" << endl;
				break;
			case 14:
				cout << "F" << endl;
				break;
			case 21:
				cout << "B" << endl;
				break;
			default:
				cout << "NA" << endl;
		}
	}
}