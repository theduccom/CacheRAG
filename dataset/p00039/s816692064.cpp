#include <iostream>
using namespace std;

int number(char a){
  if (a=='I')
    return 1;
  if (a=='V')
    return 5;
  if (a=='X')
    return 10;
  if (a=='L')
    return 50;
  if (a=='C')
    return 100;
  if (a=='D')
    return 500;
  if (a=='M')
    return 1000;
}

int RomanToNum(string r){
	int num = 0;
	for(int i=0;i<r.size();i++){
		if(i <r.size()-1 && number(r[i])<number(r[i+1])){
			num += number(r[i+1]);
			num -= number(r[i]);
			i++;
		}
		else{
			num += number(r[i]);
		}
	}
	return num;
}

int main(){
  string roman;
  while(cin >> roman){
		cout << RomanToNum(roman) << endl;
  }
  return 0;
}