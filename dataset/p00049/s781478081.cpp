#include<iostream>
#include<string>


using namespace std;

int main(){

  int sum[4]={0,0,0,0}, in;
  char trash;
  string blood;


  while(cin >> in >> trash >> blood){
    if(blood == "AB"){
      sum[0]++;
    }else if(blood == "A"){
      sum[1]++;
    }else if(blood == "B"){
      sum[2]++;
    }else{
      sum[3]++;
    }
  }

  cout << sum[1] << endl << sum[2] << endl << sum[0] << endl << sum[3] << endl;

  return 0;
}