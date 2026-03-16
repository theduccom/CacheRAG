#include <iostream>
using namespace std;

int main(){
    int s[8][8];
    int tmp;
    string str;
    do{
        for(int i=0; i<8; i++){
            cin >> tmp;
            for(int j=7; j>=0; j--){
                s[i][j] = tmp % 10;
                tmp /= 10;
            }
        }
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                if(s[i][j] == 1){
                    if(s[i][j+1] == 1 && s[i+1][j] == 1 && s[i+1][j+1] == 1) cout << "A" << endl;
                    if(s[i+1][j] == 1 && s[i+2][j] == 1 && s[i+3][j] == 1) cout << "B" << endl;
                    if(s[i][j+1] == 1 && s[i][j+2] == 1 && s[i][j+3] == 1) cout << "C" << endl;
                    if(s[i+1][j] == 1 && s[i+1][j-1] == 1 && s[i+2][j-1] == 1) cout << "D" << endl;
                    if(s[i][j+1] == 1 && s[i+1][j+1] == 1 && s[i+1][j+2] == 1) cout << "E" << endl;
                    if(s[i+1][j] == 1 && s[i+1][j+1] == 1 && s[i+2][j+1] == 1) cout << "F" << endl;
                    if(s[i][j+1] == 1 && s[i+1][j] == 1 && s[i+1][j-1] == 1) cout << "G" << endl;
                }
            }
        }
    }while(getline(cin, str));
    return 0;
}