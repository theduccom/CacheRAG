#include<iostream>
#include<cstdio>
#include<map>
using namespace std;

int main() {
  int no;
  char blood[5];
  string blood_group[] = {"A", "B", "AB", "O"};
  map<string, int> data;
  while(scanf("%d,%s",&no,blood) != EOF) data[blood]++;
  for(int i = 0; i < 4; i++) cout << data[ blood_group[i] ] << endl;
  return 0;
}