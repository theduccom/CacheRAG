#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
const string yaku[] = {"null",
		       "one pair",
		       "two pair",
		       "three card",
		       "four card",
		       "straight",
		       "full house"};
int one(int T[]){
  int cnt = 0;
  for(int i = 0 ; i < 4 ; i++){
    if(T[i] == T[i+1])cnt++;
    if(cnt == 1)return 1;
    if(T[i] != T[i+1])cnt = 0;
  }
  return -1;
}

int two(int T[]){
  int cnt = 0,f = 0;
  for(int i = 0 ; i < 4 ; i++){
    if(T[i] == T[i+1])cnt++;
    if(cnt == 2)return 2;
  }
  return -1;
}

int three(int T[]){
  int cnt = 0;
  for(int i = 0 ; i < 4 ; i++){
    if(T[i] == T[i+1])cnt++;
    if(cnt == 2)return 3;
    if(T[i]!=T[i+1])cnt = 0;
  }
  return -1;
}

int four(int T[]){
  int cnt = 0;
  for(int i = 0 ; i < 4 ; i++){
    if(T[i] == T[i+1])cnt++;
    if(cnt == 3)return 4;
    if(T[i] != T[i+1])cnt = 0;
  }
  return -1;
}
int straigt(int T[]){
  int f = 1;
  if(T[0] == 1&&T[4] == 13){
    if(T[1] == 10 && T[2] == 11 && T[3] == 12 )f = 1;
    else f = 0;
  }else{
    for(int i = 0 ; i < 5 ; i++ ){
      if(T[i] != i + T[0])f = 0;
    }
  }
  if(f)return 5;
  else return -1;
}

int fullhouse(int T[]){
  int cmp1=-1,cmp2=-1;
  int cnt = 0;
  //3
  for(int i = 0 ; i < 4 ; i++){
    if(T[i] == T[i+1])cnt++;
    if(cnt == 2){
      cmp1 = T[i];
      break;
    }
    if(T[i] != T[i+1])cnt = 0;
  }
  //2
  cnt = 0;
  for(int i = 0 ; i < 4 ; i++){
    if(T[i] == T[i+1])cnt++;
    if(cnt == 1 && T[i+1] != T[i+2]){
      cmp2 = T[i];
      break;
    }
    if(T[i] != T[i+1])cnt = 0;
  }
  if(cmp1 != cmp2 && cmp1 > 0 && cmp2 > 0)return 6;
  else return -1;
}

int main(){
  int toranpu[5];
  char c;
  while(cin >> toranpu[0]){
    int f = 0;
    for(int i = 1; i < 5 ; i++){
      cin >> c >>toranpu[i];
    }
    sort(toranpu,toranpu+5);

    if(one(toranpu) != -1)f = one(toranpu);

    if(two(toranpu) != -1)f = two(toranpu);

    if(three(toranpu) != -1)f = three(toranpu);

    if(four(toranpu) != -1)f = four(toranpu);

    if(straigt(toranpu) != -1)f = straigt(toranpu);

    if(fullhouse(toranpu) != -1)f = fullhouse(toranpu);

    cout << yaku[f] << endl;
  }
  return 0;
}