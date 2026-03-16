#include<iostream>
#include<string>
using namespace std;

string b[11];
int solve(int i, int j){
    if(b[i][j+1]=='1'&&b[i+1][j]=='1'&&b[i+1][j+1]=='1') cout << 'A';
    else if(b[i+1][j]=='1'&&b[i+2][j]=='1'&&b[i+3][j]=='1') cout << 'B';
    else if(b[i][j+1]=='1'&&b[i][j+2]=='1'&&b[i][j+3]=='1') cout << 'C';
    else if(b[i][j+1]=='1'&&b[i+1][j+1]=='1'&&b[i+1][j+2]=='1') cout << 'E';
    else if(b[i+1][j]=='1'&&b[i+1][j+1]=='1'&&b[i+2][j+1]=='1') cout << 'F';
    else if(b[i+1][j-1]=='1'&&b[i+1][j]=='1'&&b[i+2][j-1]=='1') cout << 'D';
    else cout << 'G';
}
    
int main(){
    int i, j;
    char c;
    while(cin >> b[0]){
        b[0] += "000";
        for(int i=1;i<8;i++){
            cin >> b[i];
            b[i] += "000";
        }
        for(int i=8;i<11;i++){
            b[i] = "00000000000";
        }
        for(int i=0;i<64;i++){
            if(b[i/8][i%8] == '1'){
                solve(i/8, i%8);
                cout << endl;
                break;
            }
        }
    }
}