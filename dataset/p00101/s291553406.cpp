#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

string in;

int main(){
  int num;
  cin >> num;
  getline(cin,in);
  while(num--){
    getline(cin,in);
    vector<int> V;
    V.push_back(-7);
    
    while(1){
      int n = in.find("Hoshino",V.back()+7);
      if(n != -1) V.push_back(n);
      else break;
    }

    for(int i = 1; i < V.size(); i++)
      in.replace(V[i],7,"Hoshina");
    
    cout << in << endl;
  }
  return 0;
}