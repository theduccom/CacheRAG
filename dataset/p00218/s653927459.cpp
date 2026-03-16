#include<iostream>

using namespace std;
 
void dist(int math, int eng, int jap){
  int av = (math + eng + jap) / 3;

  if(math == 100 || eng ==100 || jap ==100){
    cout << 'A' << endl;
  }else if((math + eng) / 2 >= 90){
    cout << 'A' << endl;
  }else if(av >= 80){
    cout << 'A' << endl;
  }else if(av >= 70){
    cout << 'B' << endl;
  }else if(av >= 50 && (math >= 80 || eng >= 80)){
    cout << 'B' << endl;
  }
  else{
    cout << 'C' << endl;
  }
       
}
 
int main(){
   
  int n,pm,pe,pj;
 
  while(cin >> n){
    if(n == 0){ 
      break;
    }
    for(int i = 0; i < n; i++){
      cin >> pm >> pe >> pj;
      dist(pm,pe,pj);
    }
  }
  return 0;
}