#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(void){
  int b[4] = {0};
  for(string t ; getline(cin,t) ;){
    int i;
    for(i = 0 ; t[i] != ','; i ++);
    i++;
    if(t.size() - i == 2){b[2]++;continue;}
    if(t[i] == 'A')b[0]++;
    if(t[i] == 'B')b[1]++;
    if(t[i] == 'O')b[3]++;
  }
  for(int i = 0 ; i < 4 ; i ++)
    cout<<b[i]<<endl;
}