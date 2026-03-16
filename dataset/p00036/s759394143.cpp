#include <iostream>

using namespace std;

int main(void){
     char field[8][8];
     char tmp;
     int i,j;
	 while(1){
	   for(i=0;i<8;i++){
		 for(j=0;j<8;j++){
		   cin >> field[i][j];
		   //cout << field[i][j];
		 }
		 //cout << endl;
	   }
	   
	   //»ê¼êÌ`ÉÂ¢Ä»Ê
	   //Ü¸¶ãÌ}XðT·
	   for(i=0;i<8;i++){
		 for(j=0;j<8;j++){
		   if(field[i][j] == '1') goto NEXT;
		 }
	   }
	 NEXT:
	   //cout << i << "    " << j << endl;

     
	   if(j+3 <= 7 && field[i][j+1] == '1' && field[i][j+2] == '1' && field[i][j+3] == '1'){
		 //¡êñ
		 cout << "C" << endl;
	   }else if(i+3 <= 7 && field[i+1][j]  == '1' && field[i+2][j] == '1' && field[i+3][j] == '1'){
		 //cêñ
		 cout << "B" << endl;
	   }else if(j+1 <= 7 && i+1 <= 7 && field[i][j+1] == '1' && field[i+1][j] == '1' && field[i+1][j+1] == '1'){
		 //³û`
		 cout << "A" << endl;
	   }else if(i+2 <= 7 && j+1 <= 7 && field[i+1][j] == '1' && field[i+1][j+1]  == '1' && field[i+2][j+1] == '1'){
		 //1 0
		 //1 1
		 //0 1
		 cout << "F" << endl;
	   }else if(j-1 >= 0 && j+1 <= 7 && i+1 <= 7 && field[i][j+1] == '1' && field[i+1][j] == '1' && field[i+1][j-1] == '1'){
		 //0 1 1
		 //1 1 0
		 cout << "G" << endl;
	   }else if(j+2 <= 7 && i+1 <= 7 && field[i][j+1] == '1' && field[i+1][j+1]  == '1' && field[i+1][j+2] == '1'){
		 //1 1 0
		 //0 1 1
		 cout << "E" << endl;
	   }else{
		 cout << "D" << endl;
	   }
	   cin.ignore();
	   cin.ignore();
	   if(cin.eof()) return 0;
	 }
	 return 0;
}