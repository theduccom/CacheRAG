#include<iostream>
using namespace std;

void s_class(int pm, int pe, int pj){
  int ave=0;
  ave+=pm+pe+pj;
  ave /= 3;
  if(pm==100 || pe==100 || pj==100) cout << 'A' << endl;
  else if((pm+pe)/2 >= 90) cout << 'A' << endl;
  else if(ave>=80) cout << 'A' << endl;
  else if(ave>=70) cout << 'B' << endl;
  else if(ave>=50 && (pm>=80 || pe>=80)) cout << 'B' << endl;
  else cout << 'C' << endl;
				    
}

int main(){
  
  int n;
  int pm,pe,pj;

  while(cin >> n){
    if(n==0) break;
    for(int i=0; i<n; i++){
      cin >> pm >> pe >> pj;
      s_class(pm,pe,pj);
    }
  }
  return 0;
}