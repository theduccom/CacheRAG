#include<iostream>
#include<queue>
using namespace std;

int main(){
  queue<int> year;
  int a,b,cou,count,tmp,i,as=0;
  while(1){
    cin >> a >> b;
    if(a == 0 && b == 0) break;
    if(as != 0){
      cout << endl;
    }
    cou = b - a + 1;
    for(i=0;i<cou;i++){
      tmp = a + i;
      if(tmp%4 == 0 && tmp%100 != 0 || tmp%400 == 0){
	year.push(tmp);
      }
    }
    count = year.size();
    if(count == 0){
      cout << "NA" << endl;
    }
    else{
      for(i=0;i<count;i++){
	cout << year.front() << endl;
	year.pop();
      }
    }
    as = 1;
  }
}