#include<iostream>
#include<string>
using namespace std;

int main(){

  string s[10];

  while(cin >> s[0]){
    for(int i=1;i<8;i++) cin >> s[i];

    for(int i=0;i<8;i++){
      for(int j=0;j<8;j++){

	if(s[i][j] == '1'){
	  if(s[i][j+1] == '1' && s[i+1][j] == '1' && s[i+1][j+1] == '1') cout << 'A' << endl;
	  else if(s[i+1][j] == '1' && s[i+2][j] == '1' && s[i+3][j] == '1') cout << 'B' << endl;
	  else if(s[i][j+1] == '1' && s[i][j+3] == '1' && s[i][j+3] == '1') cout << 'C' << endl;
	  else if(s[i+1][j-1] == '1' && s[i+1][j] == '1' && s[i+2][j-1] == '1') cout << 'D' << endl;
	  else if(s[i][j+1] == '1' && s[i+1][j+1] == '1' && s[i+1][j+2] == '1') cout << 'E' << endl;
	  else if(s[i+1][j] == '1' && s[i+1][j+1] == '1' && s[i+2][j+1] == '1') cout << 'F' << endl;
	  else if(s[i][j+1] == '1' && s[i+1][j-1] == '1' && s[i+1][j] == '1') cout << 'G' << endl;
	}

      }
    }
  }
}