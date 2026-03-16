#include<iostream>

using namespace std;

int hantei(void);

string in;

int main(){


  int sum = 0;

  while(cin >> in){
    if(in.length() == 1) sum++;
    else{
      if(hantei()) sum++;
	//cout << in<< endl;
    }
  }
  cout << sum <<endl;
  return 0;
}


int hantei(void){
  for(int i = 0; i < in.length()/2; i++){
    if(in[i] != in[in.length()-1-i]) return 0;
  }
  return 1;
}