#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

  int n, m, num, w[100], len;
  string str, word[100];
  vector<int> vc[100];

  num = 0;
  while(cin >> str >> n){
    for(int i=0; i<=num; i++){
      if(i == num){
        word[i] = str;
        vc[i].push_back(n);
        num++;
        break;
      }
      else if(word[i] == str){
        vc[i].push_back(n);
        break;
      }
    }
  }

  fill(w, w+100, 0);
  for(int i=0; i<num; i++){
    for(int j=0; j<num; j++){
      if(w[j] == 0){
        str = word[j];
        break;
      }
    }

    for(int j=0; j<num; j++){
      if(w[j] == 0 && word[j].compare(str) <= 0){
        str = word[j];
        m = j;
      }
    }

    len = vc[m].size();
    sort(&vc[m][0], &vc[m][0+len]);
    cout << word[m] << endl << vc[m][0];
    for(int j=1; j<len; j++){
      cout << " " << vc[m][j];
    }
    cout << endl;
    w[m] = 1;
  }

  return 0;

}