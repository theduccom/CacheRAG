#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

string in;
vector<int> P,A;

int main(){
  getline(cin,in);
  P.push_back(0);
  A.push_back(0);
  while(1){
    int n = in.find("apple",A.back()+5);
    if(n != -1) A.push_back(n);
    else break;
  }

  while(1){
    int n = in.find("peach",P.back()+5);
    if(n != -1) P.push_back(n);
    else break;
  }

  for(int i = 1; i < P.size(); i++)
    in.replace(P[i],5,"apple");
  for(int i = 1; i < A.size(); i++)
    in.replace(A[i],5,"peach");

  cout << in << endl;
  return 0;
}