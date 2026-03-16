#include<iostream>
using namespace std;

int main(void){
  int count=0;
  while(1){
  cin >> count;
  if(count == 0) break;
  else{
    int maxkan,maxkyori=-1,kan=0,kyori1=0,kyori2=0;
    for(int i=0;i<count;i++){
      cin >> kan >> kyori1 >> kyori2;
       if(maxkyori < kyori1+kyori2){
         maxkan = kan;
         maxkyori = kyori1+kyori2;
       }
    }
    cout << maxkan << " " << maxkyori << endl;
   } 
  }
}