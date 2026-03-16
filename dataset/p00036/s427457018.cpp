#include <iostream>
using namespace std;

int main(){
    char mas[8][8];
    while(1){
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin >> mas[i][j];
            }
        }
        if(cin.eof()) break;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(mas[i][j] == '1'){
                    if(mas[i+1][j]=='1'&&mas[i][j+1]=='1'&&mas[i+1][j+1]=='1') cout << "A" << endl;
                    else if(mas[i+1][j]=='1'&&mas[i+2][j]=='1'&&mas[i+3][j]=='1') cout << "B" << endl;
                    else if(mas[i][j+1]=='1'&&mas[i][j+2]=='1'&&mas[i][j+3]=='1') cout << "C" << endl;
                    else if(mas[i+1][j]=='1'&&mas[i+1][j-1]=='1'&&mas[i+2][j-1]=='1') cout << "D" << endl;
                    else if(mas[i][j+1]=='1'&&mas[i+1][j+1]=='1'&&mas[i+1][j+2]=='1') cout << "E" << endl;
                    else if(mas[i+1][j]=='1'&&mas[i+1][j+1]=='1'&&mas[i+2][j+1]=='1') cout << "F" << endl;
                    else if(mas[i][j+1]=='1'&&mas[i+1][j]=='1'&&mas[i+1][j-1]=='1') cout << "G" << endl;
                }
            }
        }
    }
}