#include <iostream>
using namespace std;

int main(){
  int blood[4]={0,0,0,0};
  int num;
  char komma;
  string bl;
  int i;

  while(cin>>num>>komma>>bl){
    if(bl=="A") blood[0]++;
    else if(bl=="B") blood[1]++;
    else if(bl=="AB") blood[2]++;
    else blood[3]++;
  }
  cout<<blood[0]<<endl<<blood[1]<<endl;
  cout<<blood[2]<<endl<<blood[3]<<endl;

  return 0;
}