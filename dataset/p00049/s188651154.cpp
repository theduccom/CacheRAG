#include<bits/stdc++.h>
using namespace std;

int main(){

  char c;
  string blood;
  int sum[4]={0,0,0,0};

  while(cin>>c){
    while(cin>>c , c!=',');
    cin >> blood;

    if(blood == "A")sum[0]++;
    else if(blood == "B")sum[1]++;
    else if(blood == "AB")sum[2]++;
    else sum[3]++;

  }

  for(int i=0; i<4; i++)cout << sum[i] << endl;

  return 0;
}