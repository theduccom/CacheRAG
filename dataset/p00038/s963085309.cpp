#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

  int num[5];
  char trash;
  vector<int> V;

  while(cin >> num[0] >> trash >> num[1] >> trash >> num[2] >> trash >> num[3] >> trash >> num[4]){
    for(int i = 0; i < 5; i++) V.push_back(num[i]);

    sort(V.begin(), V.end());


    if(V[1] == V[0] && V[2] == V[0] && V[3] == V[0] || V[2] == V[1] && V[3] == V[1] && V[4] == V[1]){
      cout << "four card"<< endl;
    }else if(V[1] == V[0] && V[2] == V[0] && V[3] == V[4] || V[3] == V[2] && V[4] == V[2] && V[1] == V[0]){
      cout << "full house" << endl;
    }else if(V[1] == V[0]+1 && V[2] == V[0]+2 &&V[3] == V[0]+3 && V[4] == V[0]+4 || V[0] == 1 &&  V[1] == 10 && V[2] == 11 && V[3] == 12 && V[4] == 13){
      cout << "straight" << endl;
    }else if(V[1] == V[0] && V[2] == V[0] || V[2] == V[1] && V[3] == V[1] || V[3] == V[2] && V[4] == V[2]){
      cout << "three card" << endl;
    }else if(V[1] == V[0] && V[2] == V[3] || V[2] == V[1] && V[3] == V[4] || V[1] == V[0] && V[3] == V[4]){
      cout << "two pair" << endl;
    }else if(V[1] == V[0] || V[2] == V[1] || V[3] == V[2] || V[4] == V[3]){
      cout << "one pair" << endl;
    }else{
      cout << "null" <<endl;
    }

    V.clear();


  }

  return 0;
}