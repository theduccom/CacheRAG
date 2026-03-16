#include <cstdio>
#include <queue>
#include <map>

using namespace std;

const int MAX_N = 1000;
const int MAX_P = 76543210;
const int INF = 1000000000;

int N = 0;
int problem[MAX_N][8];
map<int, int> table;
queue<int> que;

int pow10(int x){
  int answer = 1;
  for(int i = 0; i < x; i++){
    answer = answer * 10;
  }
  return answer;
}

void receiveInput(){
  for(int n = 0; n < MAX_N; n++){
    N += 1;
    for(int i = 0; i < 8; i++){
      if(scanf("%d", &problem[n][i]) == EOF) {
        N -= 1;
        return;
      }
    }
  }
  return;
}

int encode(int n){
  int p = 0;
  for(int i = 0; i < 8; i++){
    p += problem[n][i] * pow10(7 - i);
  }
  return p;
}

int whereIsZero(int p){
  int answer = 7;
  for(int i = 0; i < 8; i++){
    if(p % 10 == 0){
      return answer;
    }
    answer -= 1;
    p = p / 10;
  }
  return answer;
}

int swap(int p, int k, int h){
  int tenk = pow10(7 - k);
  int tenh = pow10(7 - h);
  int pk = (p / tenk) % 10;
  int ph = (p / tenh) % 10;
  return p + (ph - pk) * tenk + (pk - ph) * tenh;
}

void addNeighbor(int p){
  int k = whereIsZero(p);
  if(k != 0 && k != 4){
    int neighbor = swap(p, k, k - 1);
    if(table.count(neighbor) == 0 || table[p] + 1 < table[neighbor]){
      table[neighbor] = table[p] + 1;
      que.push(neighbor);
    }
  }
  if(k - 4 >= 0){
    int neighbor = swap(p, k, k - 4);
    if(table.count(neighbor) == 0 || table[p] + 1 < table[neighbor]){
      table[neighbor] = table[p] + 1;
      que.push(neighbor);
    }
  }
  if(k != 3 && k != 7){
    int neighbor = swap(p, k, k + 1);
    if(table.count(neighbor) == 0 || table[p] + 1 < table[neighbor]){
      table[neighbor] = table[p] + 1;
      que.push(neighbor);
    }
  }
  if(k + 4 < 8){
    int neighbor = swap(p, k, k + 4);
    if(table.count(neighbor) == 0 || table[p] + 1 < table[neighbor]){
      table[neighbor] = table[p] + 1;
      que.push(neighbor);
    }
  }
  return ;
}

void searchMove(){
  if(que.empty()){
    return;
  }
  int p = que.front();
  que.pop();
  addNeighbor(p);
  searchMove();
  return ;
}

void makeTable(){
  table[1234567] = 0;
  que.push(1234567);
  searchMove();
  return ;
}

int solve(int n){
  int p = encode(n);
  return table[p];
}

int main(){
  receiveInput();
  makeTable();
  for(int n = 0; n < N; n++){
    printf("%d\n", solve(n));
  }
  return 0;
}