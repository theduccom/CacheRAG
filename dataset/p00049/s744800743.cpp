#include <iostream>
using namespace std;

int blood[4];

int main(void){
  int a;
  string b;
  while(cin >> a >> b){
    if(b[1] == 'A' && b[2] == 'B') blood[2]++;
    else if(b[1] == 'A') blood[0]++;
    else if(b[1] == 'B') blood[1]++;
    else if(b[1] == 'O') blood[3]++;
  }

  for(int i = 0; i < 4; i++){
    cout << blood[i] << endl;
  }
  return 0;
}